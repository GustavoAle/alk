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

#ifndef ALK_LUAVM_H
#define ALK_LUAVM_H

extern "C"
{
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}

#include <string>

#ifndef LUA_OK
#  define LUA_OK 0
#endif

class LuaVM
{
private:
    lua_State *luaVMState;

public:
    LuaVM();

    double mathEval(std::string& expr);

    double getGlobalD(std::string& globalVar);
    double getGlobalD(const char *globalVar);


    ~LuaVM();
};


#endif