#include <alk/luavm.h>
#include <alk/luaexception.h>

#include <string>

LuaVM::LuaVM()
{
    luaVMState = luaL_newstate();
    luaL_openlibs(luaVMState);
}

double LuaVM::mathEval(std::string& expr)
{
    int ret;
    size_t eqPos;

    eqPos = expr.find('=');
    if(eqPos == std::string::npos)
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