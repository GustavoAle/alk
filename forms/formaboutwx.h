///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.0-4761b0c5)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class FormAboutWX
///////////////////////////////////////////////////////////////////////////////
class FormAboutWX : public wxDialog
{
	private:

	protected:
		wxStaticBitmap* pngLogo;
		wxStaticText* lblAlk;
		wxStaticText* m_staticText2;
		wxStaticText* lblDesc;
		wxStaticText* lblThanks;
		wxStaticText* lblCopyright;
		wxStaticText* lblLicense;

	public:

		FormAboutWX( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~FormAboutWX();

};

