// #include "alkui.h"
#include <wx/wx.h>

class MyApp : public wxApp
{
  public:
    virtual bool OnInit();
};

bool MyApp::OnInit()
{
    frmCalc *calcFrm = new frmCalc(NULL);
    calcFrm->Show(true);

    return true;
}

IMPLEMENT_APP(MyApp)

// int main()
// {   
//     frmCalc *calcFrm = new frmCalc(NULL);

//     calcFrm->Show(true);

// }