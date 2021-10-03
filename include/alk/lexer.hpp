#ifndef LEXER_HPP
#define LEXER_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <alk/token.hpp>

using namespace std;

class Lexer 
{
private:
    // string lexBuffer;
    // int relativePos;
    
    istream *inputStream;
    const char getChar();
    void unGetChar();

public:
    Lexer();

    void setStream(istream& _stream);
    Token getToken();

    ~Lexer();
};

inline void Lexer::setStream(istream& _stream)
{
    inputStream = &_stream;
}

inline const char Lexer::getChar()
{
    char retVal;
    retVal = (char)inputStream->get();
    return retVal;
}

inline void Lexer::unGetChar()
{
    inputStream->unget();
}

#endif