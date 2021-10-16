#ifndef ALK_LUAEXCEPTION_H
#define ALK_LUAEXCEPTION_H

#include <exception>
#include <string>

class LuaException : public std::exception
{
protected:
    std::string msg;
    int type;

public:
    LuaException(const char *message)
        :msg(message) {}

    LuaException(const std::string& message)
        :msg(message) {}
    
    LuaException(int type)
        :type(type) { }

    virtual const char *what() const noexcept
    {
        return msg.c_str();
    }

    ~LuaException()
    {
    }
};

#endif