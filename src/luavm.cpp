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

#include <alk/luavm.h>

extern "C"
{
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}

#include <alk/luaexception.h>

#include <string>
#include <regex>

LuaVM::LuaVM()
{
    luaVMState = luaL_newstate();
    luaL_openlibs(luaVMState);
}

double LuaVM::mathEval(std::string& expr)
{
    int ret;

    bool hasAssign;
    bool isStatement;

    hasAssign = expr.find('=') != std::string::npos;
    isStatement = std::regex_match (expr,std::regex("(.*)(function|for|while|end)(.*)") );

    if(!hasAssign && !isStatement)
    {
        expr = "ans="+expr;
    }

    ret = luaL_dostring(luaVMState,expr.c_str());

    if(ret == LUA_OK)
    {
        return this->getGlobalD("ans");
    }

    throw LuaException("Lua Error: " + (std::string)lua_tostring(luaVMState,-1));
}

double LuaVM::getGlobalD(std::string& globalVar)
{
    lua_getglobal(luaVMState,globalVar.c_str());

    if(lua_isnumber(luaVMState,-1))
    {
        return (double)lua_tonumber(luaVMState,-1);
    }

    throw LuaException("Not a number");
}

double LuaVM::getGlobalD(const char *globalVar)
{
    lua_getglobal(luaVMState,globalVar);

    if(lua_isnumber(luaVMState,-1))
    {
        return (double)lua_tonumber(luaVMState,-1);
    }

    throw LuaException("Not a number");
}

LuaVM::~LuaVM()
{

}