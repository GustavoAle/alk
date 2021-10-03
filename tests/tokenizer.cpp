#include <iostream>
#include <alk/lexer.hpp>
#include <alk/token.hpp>

int main()
{
    Lexer myLexer;
    Token retToken;
    // char aa[64];
    // scanf("%s",aa);

    myLexer.setStream(std::cin);

    for(;;)
    {
        retToken = myLexer.getToken();

        std::cout << "Get token: ";
        switch(retToken.type)
        {
            case Token::TokenType::identifier: 
            case Token::TokenType::longConst: 
            case Token::TokenType::doubleConst: 
                std::cout << retToken.value << '\n'; break;
            default:
                std::cout << retToken.cvalue << '\n'; break;
        }
        
        // std::cout << " Type: " << (int)retToken.type << '\n';
    }
    
}
