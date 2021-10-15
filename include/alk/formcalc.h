#ifndef ALK_FORMCALC_H
#define ALK_FORMCALC_H

#include <forms/formcalcwx.h>
#include <wx/wx.h>

class FormCalc : public FormCalcWX
{
protected:
    virtual void histRerun( wxCommandEvent& event );
    virtual void evalEntry( wxCommandEvent& event );
    virtual void viewAbout( wxCommandEvent& event );
    virtual void focusEntry( wxFocusEvent& event );
    virtual void toggleMode( wxCommandEvent& event );
    virtual void basicButton( wxCommandEvent& event );

public:
    FormCalc(
        wxWindow* parent, 
        wxWindowID id = wxID_ANY, 
        const wxString& title = wxT("Alk"), 
        const wxPoint& pos = wxDefaultPosition, 
        const wxSize& size = wxSize( -1,-1 ), 
        long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL 
    );



    ~FormCalc();
};

#endif