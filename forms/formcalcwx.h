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
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gbsizer.h>
#include <wx/tglbtn.h>
#include <wx/menu.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define BASIC_7_ 1000
#define BASIC_8_ 1001
#define BASIC_9_ 1002
#define BASIC_DIV_ 1003
#define BASIC_CE_ 1004
#define BASIC_C_ 1005
#define BASIC_4_ 1006
#define BASIC_5_ 1007
#define BASIC_6_ 1008
#define BASIC_MUL_ 1009
#define BASIC_LPAR_ 1010
#define BASIC_RPAR_ 1011
#define BASIC_1_ 1012
#define BASIC_2_ 1013
#define BASIC_3_ 1014
#define BASIC_SUB_ 1015
#define BASIC_SQ_ 1016
#define BASIC_SQRT_ 1017
#define BASIC_0_ 1018
#define BASIC_DOT_ 1019
#define BASIC_PERC_ 1020
#define BASIC_ADD_ 1021
#define BASIC_EQ_ 1022
#define TGB_KEYBOARD 1023
#define TGB_BASIC 1024
#define TGB_ADVANCED 1025

///////////////////////////////////////////////////////////////////////////////
/// Class FormCalcWX
///////////////////////////////////////////////////////////////////////////////
class FormCalcWX : public wxFrame
{
	private:

	protected:
		wxStaticText* labResult;
		wxTextCtrl* txbEntry;
		wxPanel* panAdvanced;
		wxPanel* panBasic;
		wxButton* m_button43;
		wxButton* m_button44;
		wxButton* m_button45;
		wxButton* m_button46;
		wxButton* m_button47;
		wxButton* m_button48;
		wxButton* m_button49;
		wxButton* m_button50;
		wxButton* m_button51;
		wxButton* m_button52;
		wxButton* m_button53;
		wxButton* m_button54;
		wxButton* m_button55;
		wxButton* m_button56;
		wxButton* m_button57;
		wxButton* m_button58;
		wxButton* m_button59;
		wxButton* m_button60;
		wxButton* m_button61;
		wxButton* m_button62;
		wxButton* m_button63;
		wxButton* m_button64;
		wxButton* m_button65;
		wxToggleButton* tgbKeyboard;
		wxToggleButton* tgbBasic;
		wxToggleButton* tgbAdvanced;
		wxMenuBar* menMain;
		wxMenu* menHelp;

		// Virtual event handlers, override them in your derived class
		virtual void histRerun( wxCommandEvent& event ) { event.Skip(); }
		virtual void focusEntry( wxFocusEvent& event ) { event.Skip(); }
		virtual void evalEntry( wxCommandEvent& event ) { event.Skip(); }
		virtual void basicButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void toggleMode( wxCommandEvent& event ) { event.Skip(); }
		virtual void viewAbout( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxListBox* lstHist;

		FormCalcWX( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Alk"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FormCalcWX();

};

