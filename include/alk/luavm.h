#ifndef ALK_LUAVM_H
#define ALK_LUAVM_H

extern "C"
{
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}

#include <string>

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