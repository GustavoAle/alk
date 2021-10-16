#include <alk/app.h>
#include <alk/formcalc.h>
#include <alk/luavm.h>

#include <wx/wx.h> 


// equivalent to function main()
IMPLEMENT_APP(AlkApp)

bool AlkApp::OnInit()
{
    FormCalc *formCalc;
    LuaVM *luaVM = new LuaVM();

    wxImage::AddHandler(new wxPNGHandler());

    SetTopWindow(formCalc);
    
    formCalc = new FormCalc(NULL);
    formCalc->setLuaVM(luaVM);
    formCalc->Show(true);

    return true;
}