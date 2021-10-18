/*******************************************************************************

    ALK - A calculator written in C++ and Lua C API
    Copyright (C) 2021  Gustavo Ale

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*******************************************************************************/

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