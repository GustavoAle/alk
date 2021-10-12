///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.0-4761b0c5)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/listbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class FormCalcWX
///////////////////////////////////////////////////////////////////////////////
class FormCalcWX : public wxFrame
{
	private:

	protected:
		wxStaticText* labResult;
		wxTextCtrl* txbEntry;
		wxButton* btnEval;
		wxMenuBar* menMain;
		wxMenu* menHelp;

		// Virtual event handlers, override them in your derived class
		virtual void histRerun( wxCommandEvent& event ) { event.Skip(); }
		virtual void evalEntry( wxCommandEvent& event ) { event.Skip(); }
		virtual void viewAbout( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxListBox* lstHist;

		FormCalcWX( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Alk"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FormCalcWX();

};

