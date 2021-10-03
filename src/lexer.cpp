#include <alk/lexer.hpp>
#include <alk/token.hpp>

#include <string>
#include <iostream>
#include <ctype.h>

using namespace std;

Lexer::Lexer()
{

}

Lexer::~Lexer()
{

}

Token Lexer::getToken()
{
    Token retToken;
    Token::TokenType curType;

    string lexeme = "";

    char curChar;
    int ret;

    enum states_t
    {
        ST_START,
        ST_ID,
        ST_INT,
        ST_FLOAT,
        // ST_BLANK,
        ST_OPER
    };

    enum states_t curState = ST_START;
    
    retToken.value = "";
    // retToken.cvalue = ":";

    for(;;)
    {
        switch(curState)
        {
        case ST_START:
            curChar = getChar();
            switch(curChar)
            {
                case '+':
                case '-':
                case '*':
                case '/':
                case '=':
                case '(':
                case ')':
                    curState = ST_OPER; 
                    break;
                default:
                    if(isalpha(curChar))
                    { 
                        curState = ST_ID;
                        lexeme += curChar;
                    }
                    else if(isdigit(curChar))
                    {
                        curState = ST_INT;
                        lexeme += curChar;
                    }
                    else if(curChar == '\n' 
                            || curChar == '\t' 
                            || curChar == '\r' 
                            || curChar == ' ') curState = ST_START;
                    else throw TokenError("Invalid token");
            }
            break;
        case ST_OPER:
            retToken.cvalue = curChar;
            switch(curChar)
            {
                case '+': retToken.type = Token::TokenType::plus; break;
                case '-': retToken.type = Token::TokenType::minus; break;
                case '*': retToken.type = Token::TokenType::asterisk; break;
                case '/': retToken.type = Token::TokenType::slash; break;
                case '=': retToken.type = Token::TokenType::assign; break;
                case '(': retToken.type = Token::TokenType::lPar; break;
                case ')': retToken.type = Token::TokenType::rPar; break;
                default: break;
            }
            return retToken;
            break;
        case ST_ID:
            curChar = getChar();
            if(isalnum(curChar))
            {
                lexeme += curChar;
                break;
            }
            else
            {
                unGetChar();
                retToken.type = Token::TokenType::identifier;
                retToken.value = lexeme;
                return retToken;
            }

        case ST_INT:
            curChar = getChar();
            if(isdigit(curChar))
            {
                lexeme += curChar;
                break;
            }
            else if(curChar == '.')
            {
                lexeme += curChar;
                curState = ST_FLOAT;
                break;
            }
            else
            {
                unGetChar();
                retToken.type = Token::TokenType::longConst;
                retToken.value = lexeme;
                return retToken;
            }
            break;
        case ST_FLOAT:
            curChar = getChar();
            if(isdigit(curChar))
            {
                lexeme += curChar;
                break;
            }
            else
            {
                unGetChar();
                retToken.type = Token::TokenType::doubleConst;
                retToken.value = lexeme;
                return retToken;
            }
            break;

        }
    }

}
