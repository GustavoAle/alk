#ifndef ALK_FORMABOUT_H
#define ALK_FORMABOUT_H

#include <forms/formaboutwx.h>
#include <wx/wx.h>

class FormAbout : public FormAboutWX
{
public:
    FormAbout(
        wxWindow* parent, 
        wxWindowID id = wxID_ANY, 
        const wxString& title = wxEmptyString, 
        const wxPoint& pos = wxDefaultPosition, 
        const wxSize& size = wxSize( -1,-1 ), 
        long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL
    );

    ~FormAbout();
};

#endif