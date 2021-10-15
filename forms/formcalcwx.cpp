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
	this->SetSizeHints( wxSize( 600,500 ), wxDefaultSize );

	wxBoxSizer* vSizer;
	vSizer = new wxBoxSizer( wxVERTICAL );

	lstHist = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), 0, NULL, 0 );
	lstHist->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	vSizer->Add( lstHist, 1, wxALL|wxEXPAND, 0 );

	labResult = new wxStaticText( this, wxID_ANY, wxT("= 0"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	labResult->Wrap( -1 );
	labResult->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	vSizer->Add( labResult, 0, wxALL|wxEXPAND, 15 );

	wxBoxSizer* hSizer;
	hSizer = new wxBoxSizer( wxHORIZONTAL );

	txbEntry = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,40 ), wxTE_PROCESS_ENTER );
	txbEntry->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	txbEntry->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	hSizer->Add( txbEntry, 1, wxALL, 0 );


	vSizer->Add( hSizer, 0, wxEXPAND, 5 );

	wxBoxSizer* hSizer2;
	hSizer2 = new wxBoxSizer( wxVERTICAL );

	panAdvanced = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	hSizer2->Add( panAdvanced, 0, wxEXPAND | wxALL, 5 );

	panBasic = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );


	bSizer6->Add( 0, 0, 1, wxEXPAND, 5 );

	wxGridBagSizer* gbSizer3;
	gbSizer3 = new wxGridBagSizer( 0, 0 );
	gbSizer3->SetFlexibleDirection( wxBOTH );
	gbSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	m_button43 = new wxButton( panBasic, BASIC_7_, wxT("7"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button43, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button44 = new wxButton( panBasic, BASIC_8_, wxT("8"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button44, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button45 = new wxButton( panBasic, BASIC_9_, wxT("9"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button45, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button46 = new wxButton( panBasic, BASIC_DIV_, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button46, wxGBPosition( 0, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button47 = new wxButton( panBasic, BASIC_CE_, wxT("CE"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button47, wxGBPosition( 0, 4 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button48 = new wxButton( panBasic, BASIC_C_, wxT("C"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button48, wxGBPosition( 0, 5 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button49 = new wxButton( panBasic, BASIC_4_, wxT("4"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button49, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button50 = new wxButton( panBasic, BASIC_5_, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button50, wxGBPosition( 1, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button51 = new wxButton( panBasic, BASIC_6_, wxT("6"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button51, wxGBPosition( 1, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button52 = new wxButton( panBasic, BASIC_MUL_, wxT("*"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button52, wxGBPosition( 1, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button53 = new wxButton( panBasic, BASIC_LPAR_, wxT("("), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button53, wxGBPosition( 1, 4 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button54 = new wxButton( panBasic, BASIC_RPAR_, wxT(")"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button54, wxGBPosition( 1, 5 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button55 = new wxButton( panBasic, BASIC_1_, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button55, wxGBPosition( 2, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button56 = new wxButton( panBasic, BASIC_2_, wxT("2"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button56, wxGBPosition( 2, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button57 = new wxButton( panBasic, BASIC_3_, wxT("3"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button57, wxGBPosition( 2, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button58 = new wxButton( panBasic, BASIC_SUB_, wxT("-"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button58, wxGBPosition( 2, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button59 = new wxButton( panBasic, BASIC_SQ_, wxT("x²"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button59, wxGBPosition( 2, 4 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button60 = new wxButton( panBasic, BASIC_SQRT_, wxT("√"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button60, wxGBPosition( 2, 5 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button61 = new wxButton( panBasic, BASIC_0_, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button61, wxGBPosition( 3, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button62 = new wxButton( panBasic, BASIC_DOT_, wxT("."), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button62, wxGBPosition( 3, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button63 = new wxButton( panBasic, BASIC_PERC_, wxT("%"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button63, wxGBPosition( 3, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button64 = new wxButton( panBasic, BASIC_ADD_, wxT("+"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button64, wxGBPosition( 3, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_button65 = new wxButton( panBasic, BASIC_EQ_, wxT("="), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( m_button65, wxGBPosition( 3, 4 ), wxGBSpan( 1, 2 ), wxALL|wxEXPAND, 5 );


	gbSizer3->AddGrowableRow( 3 );

	bSizer6->Add( gbSizer3, 1, wxEXPAND, 5 );


	bSizer6->Add( 0, 0, 1, wxEXPAND, 5 );


	panBasic->SetSizer( bSizer6 );
	panBasic->Layout();
	bSizer6->Fit( panBasic );
	hSizer2->Add( panBasic, 0, wxEXPAND | wxALL, 5 );


	vSizer->Add( hSizer2, 0, wxEXPAND, 5 );

	wxBoxSizer* hSizer3;
	hSizer3 = new wxBoxSizer( wxHORIZONTAL );


	hSizer3->Add( 0, 0, 1, wxEXPAND, 5 );

	tgbKeyboard = new wxToggleButton( this, TGB_KEYBOARD, wxT("Keyboard"), wxDefaultPosition, wxDefaultSize, 0 );
	hSizer3->Add( tgbKeyboard, 0, wxALL, 5 );

	tgbBasic = new wxToggleButton( this, TGB_BASIC, wxT("Basic"), wxDefaultPosition, wxDefaultSize, 0 );
	hSizer3->Add( tgbBasic, 0, wxALL, 5 );

	tgbAdvanced = new wxToggleButton( this, TGB_ADVANCED, wxT("Advanced"), wxDefaultPosition, wxDefaultSize, 0 );
	hSizer3->Add( tgbAdvanced, 0, wxALL, 5 );


	hSizer3->Add( 0, 0, 1, wxEXPAND, 5 );


	vSizer->Add( hSizer3, 0, wxEXPAND, 5 );


	this->SetSizer( vSizer );
	this->Layout();
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
	txbEntry->Connect( wxEVT_KILL_FOCUS, wxFocusEventHandler( FormCalcWX::focusEntry ), NULL, this );
	txbEntry->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( FormCalcWX::evalEntry ), NULL, this );
	m_button43->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button44->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button45->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button46->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button47->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button48->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button49->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button50->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button51->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button52->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button53->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button54->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button55->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button56->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button57->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button58->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button59->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button60->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button61->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button62->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button63->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button64->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button65->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	tgbKeyboard->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::toggleMode ), NULL, this );
	tgbBasic->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::toggleMode ), NULL, this );
	tgbAdvanced->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::toggleMode ), NULL, this );
	menHelp->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormCalcWX::viewAbout ), this, menAbout->GetId());
}

FormCalcWX::~FormCalcWX()
{
	// Disconnect Events
	lstHist->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( FormCalcWX::histRerun ), NULL, this );
	txbEntry->Disconnect( wxEVT_KILL_FOCUS, wxFocusEventHandler( FormCalcWX::focusEntry ), NULL, this );
	txbEntry->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( FormCalcWX::evalEntry ), NULL, this );
	m_button43->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button44->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button45->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button46->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button47->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button48->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button49->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button50->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button51->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button52->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button53->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button54->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button55->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button56->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button57->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button58->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button59->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button60->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button61->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button62->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button63->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button64->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	m_button65->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::basicButton ), NULL, this );
	tgbKeyboard->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::toggleMode ), NULL, this );
	tgbBasic->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::toggleMode ), NULL, this );
	tgbAdvanced->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( FormCalcWX::toggleMode ), NULL, this );

}
