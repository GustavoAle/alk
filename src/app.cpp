#include <alk/app.h>
#include <wx/wx.h> 

#include <alk/formcalc.h>

// equivalent to function main()
IMPLEMENT_APP(AlkApp)

bool AlkApp::OnInit()
{
    FormCalc *formCalc;
    wxImage::AddHandler(new wxPNGHandler());

    SetTopWindow(formCalc);
    
    formCalc = new FormCalc(NULL);
    formCalc->Show(true);

    return true;
}