#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>
#include <exception>

using namespace std;

typedef struct token_t
{
    enum class TokenType
    {
        identifier,
        longConst,
        doubleConst,
        plus,
        minus,
        asterisk,
        slash,
        lPar,
        rPar,
        // lessThan,
        // greaterThan,
        assign
    };

    TokenType   type;
    string      value;
    char        cvalue;

} Token;
    
class TokenError : public exception
{
private:
    string errMessage;

public:
    TokenError(const string& msg)
    {
        errMessage = msg;
    } 

    const char* what() const noexcept
    {
        return errMessage.c_str();
    }

};

#endif