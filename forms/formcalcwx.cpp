///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.0-4761b0c5)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "formcalcwx.h"

///////////////////////////////////////////////////////////////////////////

FormCalcWX::FormCalcWX( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	wxBoxSizer* vSizer;
	vSizer = new wxBoxSizer( wxVERTICAL );

	vSizer->SetMinSize( wxSize( 600,400 ) );
	lstHist = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), 0, NULL, 0 );
	vSizer->Add( lstHist, 1, wxALL|wxEXPAND, 5 );

	labResult = new wxStaticText( this, wxID_ANY, wxT("= 2.998"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	labResult->Wrap( -1 );
	vSizer->Add( labResult, 0, wxALL|wxEXPAND, 15 );

	wxBoxSizer* hSizer;
	hSizer = new wxBoxSizer( wxHORIZONTAL );

	txbEntry = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	hSizer->Add( txbEntry, 1, wxALIGN_BOTTOM|wxALL, 5 );

	btnEval = new wxButton( this, wxID_ANY, wxT("="), wxDefaultPosition, wxDefaultSize, 0 );
	hSizer->Add( btnEval, 0, wxALIGN_BOTTOM|wxALL, 5 );


	vSizer->Add( hSizer, 0, wxEXPAND, 5 );


	this->SetSizer( vSizer );
	this->Layout();
	vSizer->Fit( this );
	menMain = new wxMenuBar( 0 );
	menHelp = new wxMenu();
	wxMenuItem* menAbout;
	menAbout = new wxMenuItem( menHelp, wxID_ANY, wxString( wxT("About Alk") ) , wxEmptyString, wxITEM_NORMAL );
	menHelp->Append( menAbout );

	menMain->Append( menHelp, wxT("Help") );

	this->SetMenuBar( menMain );


	this->Centre( wxBOTH );

	// Connect Events
	lstHist->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( FormCalcWX::histRerun ), NULL, this );
	txbEntry->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( FormCalcWX::evalEntry ), NULL, this );
	btnEval->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::evalEntry ), NULL, this );
	menHelp->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormCalcWX::viewAbout ), this, menAbout->GetId());
}

FormCalcWX::~FormCalcWX()
{
	// Disconnect Events
	lstHist->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( FormCalcWX::histRerun ), NULL, this );
	txbEntry->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( FormCalcWX::evalEntry ), NULL, this );
	btnEval->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::evalEntry ), NULL, this );

}
