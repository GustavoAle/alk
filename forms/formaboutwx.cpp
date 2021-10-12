///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.0-4761b0c5)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "formaboutwx.h"

#include "logo128.png.h"

///////////////////////////////////////////////////////////////////////////

FormAboutWX::FormAboutWX( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* vSizer;
	vSizer = new wxBoxSizer( wxVERTICAL );

	pngLogo = new wxStaticBitmap( this, wxID_ANY, logo128_png_to_wx_bitmap(), wxDefaultPosition, wxDefaultSize, 0 );
	vSizer->Add( pngLogo, 0, wxALIGN_CENTER|wxALL, 30 );

	lblAlk = new wxStaticText( this, wxID_ANY, wxT("<b>ALK</b>"), wxDefaultPosition, wxDefaultSize, 0 );
	lblAlk->SetLabelMarkup( wxT("<b>ALK</b>") );
	lblAlk->Wrap( -1 );
	vSizer->Add( lblAlk, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("1.0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	vSizer->Add( m_staticText2, 0, wxALIGN_CENTER|wxALL, 5 );

	lblDesc = new wxStaticText( this, wxID_ANY, wxT("An advanced calculator written in C++ and Lua C API"), wxDefaultPosition, wxDefaultSize, 0 );
	lblDesc->Wrap( -1 );
	vSizer->Add( lblDesc, 0, wxALIGN_CENTER|wxALL, 5 );

	lblThanks = new wxStaticText( this, wxID_ANY, wxT("Special thanks to Al-Khwarizmi, the ancient Greeks and all those who founded the pillars of mathematics."), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	lblThanks->Wrap( 400 );
	vSizer->Add( lblThanks, 0, wxALIGN_CENTER|wxALL, 20 );

	lblCopyright = new wxStaticText( this, wxID_ANY, wxT("© 2021 Gustavo Ale"), wxDefaultPosition, wxDefaultSize, 0 );
	lblCopyright->Wrap( -1 );
	vSizer->Add( lblCopyright, 0, wxALIGN_CENTER|wxALL, 5 );

	lblLicense = new wxStaticText( this, wxID_ANY, wxT("<i>This program comes with absolutely no warranty.\nSee GPLv3 License for details</i>"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	lblLicense->SetLabelMarkup( wxT("<i>This program comes with absolutely no warranty.\nSee GPLv3 License for details</i>") );
	lblLicense->Wrap( -1 );
	vSizer->Add( lblLicense, 0, wxALIGN_CENTER|wxALL, 20 );


	this->SetSizer( vSizer );
	this->Layout();
	vSizer->Fit( this );

	this->Centre( wxBOTH );
}

FormAboutWX::~FormAboutWX()
{
}
