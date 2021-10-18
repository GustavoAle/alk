#include <forms/formcalcwx.h>

#include <alk/formcalc.h>
#include <alk/formabout.h>
#include <alk/luavm.h>
#include <alk/luaexception.h>

#include <wx/wx.h>

#include <iostream>

FormCalc::FormCalc(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) 
: FormCalcWX( parent, id, title, pos, size, style )
{

    lstHist->AppendColumn(wxT("Expression"),wxLIST_FORMAT_LEFT,400);
    lstHist->AppendColumn(wxT("Result"),wxLIST_FORMAT_LEFT,200);

}

void FormCalc::histRerun( wxCommandEvent& event ) 
{
    wxString histValue;

    // histValue = lstHist->GetStringSelection();
    // std::cout << "hist pressed: " << histValue << '\n';
}

void FormCalc::evalEntry( wxCommandEvent& event )
{ 
    // event.Skip(); 
    wxString entryValue;
    wxString retString;
    std::string strExpr;
    int itemPos;

    double ret;

    entryValue = txbEntry->GetValue();
    strExpr = entryValue.ToStdString();

    try
    {
        ret = luaVM->mathEval(strExpr);
    }
    catch(LuaException &e)
    {
        std::cout << e.what() << '\n';
        ret = nan("");
    }

    retString = wxString("= ") << ret;

    itemPos = lstHist->GetItemCount();
    lstHist->InsertItem(itemPos,entryValue);
    lstHist->SetItem(itemPos,1,retString);
    lstHist->EnsureVisible(itemPos);

    labResult->SetLabel(retString);
    this->Layout();

    std::cout << "eval pressed: " << entryValue << '\n';

}

void FormCalc::viewAbout( wxCommandEvent& event )
{
    if(!formAbout)
        formAbout = new FormAbout(NULL);
    
    formAbout->Show(true);
}

void FormCalc::focusEntry( wxFocusEvent& event )
{   
    int pos;

    pos = txbEntry->GetInsertionPoint();
    if(txbEntry->IsFocusable() && txbEntry->IsShownOnScreen())
    {
        txbEntry->SetFocus();
        txbEntry->SetInsertionPoint(pos);
    }
}

void FormCalc::toggleMode( wxCommandEvent& event )
{
    int btnID;

    btnID = event.GetId();

    switch(btnID)
    {
    case TGB_ADVANCED:
        tgbBasic->SetValue(false);
        tgbKeyboard->SetValue(false);
        panBasic->Hide();
        panAdvanced->Show();
        break;
    case TGB_BASIC:
        tgbKeyboard->SetValue(false);
        tgbAdvanced->SetValue(false);
        panAdvanced->Hide();
        panBasic->Show();
        break;
    case TGB_KEYBOARD:
    default:
        tgbAdvanced->SetValue(false);
        tgbBasic->SetValue(false);
        panBasic->Hide();
        panAdvanced->Hide();
    }

    this->Layout();

}


void FormCalc::resizeWidgets( wxSizeEvent& event )
{
    
    lstHist->SetColumnWidth(0,this->m_width*0.65);
    lstHist->SetColumnWidth(1,this->m_width*0.35);
    this->Layout();

}

void FormCalc::basicButton( wxCommandEvent& event )
{ 
    int btnID;
    int pos = txbEntry->GetInsertionPoint();

    std::cout << "POS: " << txbEntry->GetInsertionPoint() << '\n';

    btnID = event.GetId();
    switch(btnID)
    {
    case BASIC_7_:
        std::cout << "button pressed: " << 7 << '\n';
        txbEntry->WriteText(wxT("7"));
        break;
    case BASIC_8_:
        std::cout << "button pressed: " << 8 << '\n';
        break;
    case BASIC_9_:
        std::cout << "button pressed: " << 9 << '\n';
        break;
    case BASIC_DIV_:
        std::cout << "button pressed: " << '/' << '\n';
        break;
    case BASIC_CE_:
        std::cout << "button pressed: " << "CE" << '\n';
        break;
    case BASIC_C_:
        std::cout << "button pressed: " << "C" << '\n';
        break;
    case BASIC_4_:
        std::cout << "button pressed: " << 4 << '\n';
        break;
    case BASIC_5_:
        std::cout << "button pressed: " << 5 << '\n';
        break;
    case BASIC_6_:
        std::cout << "button pressed: " << 6 << '\n';
        break;
    case BASIC_MUL_:
        std::cout << "button pressed: " << "*" << '\n';
        break;
    case BASIC_LPAR_:
        std::cout << "button pressed: " << "(" << '\n';
        break;
    case BASIC_RPAR_:
        std::cout << "button pressed: " << ")" << '\n';
        break;
    case BASIC_1_:
        std::cout << "button pressed: " << 1 << '\n';
        break;
    case BASIC_2_:
        std::cout << "button pressed: " << 2 << '\n';
        break;
    case BASIC_3_:
        std::cout << "button pressed: " << 3 << '\n';
        break;
    case BASIC_SUB_:
        std::cout << "button pressed: " << "-" << '\n';
        break;
    case BASIC_SQ_:
        std::cout << "button pressed: " << "^2" << '\n';
        break;
    case BASIC_SQRT_:
        std::cout << "button pressed: " << "sqrt" << '\n';
        break;
    case BASIC_0_:
        std::cout << "button pressed: " << 0 << '\n';
        break;
    case BASIC_DOT_:
        std::cout << "button pressed: " << "." << '\n';
        break;
    case BASIC_PERC_:
        std::cout << "button pressed: " << "%" << '\n';
        break;
    case BASIC_ADD_:
        std::cout << "button pressed: " << "+" << '\n';
        break;
    case BASIC_EQ_:
        std::cout << "button pressed: " << "=" << '\n';
        break;
    }

    std::cout << "ok" << '\n';

}


// destructor

FormCalc::~FormCalc()
{
    
}