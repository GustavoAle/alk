#include <forms/formcalcwx.h>

#include <alk/formcalc.h>
#include <alk/formabout.h>

#include <wx/wx.h>

#include <iostream>

FormCalc::FormCalc(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) 
: FormCalcWX( parent, id, title, pos, size, style )
{

}

void FormCalc::histRerun( wxCommandEvent& event ) 
{
    wxString histValue;

    histValue = lstHist->GetStringSelection();

    std::cout << "hist pressed" << histValue << '\n';
}

void FormCalc::evalEntry( wxCommandEvent& event )
{ 
    // event.Skip(); 
    wxString entryValue;

    entryValue = txbEntry->GetValue();

    lstHist->Append(entryValue);


    std::cout << "eval pressed: " << entryValue << '\n';

}

void FormCalc::viewAbout( wxCommandEvent& event )
{
    FormAbout *formAbout = new FormAbout(NULL);
    formAbout->Show(true);
}

FormCalc::~FormCalc()
{
    
}