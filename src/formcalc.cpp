/*******************************************************************************

    ALK - A calculator written in C++ and Lua C API
    Copyright (C) 2021  Gustavo Ale

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*******************************************************************************/

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

void FormCalc::focusEntry( wxShowEvent& event )
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

    btnID = event.GetId();
    switch(btnID)
    {
    case BASIC_0_:      txbEntry->WriteText("0"); break;
    case BASIC_1_:      txbEntry->WriteText("1"); break;
    case BASIC_2_:      txbEntry->WriteText("2"); break;
    case BASIC_3_:      txbEntry->WriteText("3"); break;
    case BASIC_4_:      txbEntry->WriteText("4"); break;
    case BASIC_5_:      txbEntry->WriteText("5"); break;
    case BASIC_6_:      txbEntry->WriteText("6"); break;
    case BASIC_7_:      txbEntry->WriteText("7"); break;
    case BASIC_8_:      txbEntry->WriteText("8"); break;
    case BASIC_9_:      txbEntry->WriteText("9"); break;
    case BASIC_ADD_:    txbEntry->WriteText("+"); break;    
    case BASIC_SUB_:    txbEntry->WriteText("-"); break;    
    case BASIC_MUL_:    txbEntry->WriteText("*"); break;    
    case BASIC_DIV_:    txbEntry->WriteText("/"); break;    
    case BASIC_LPAR_:   txbEntry->WriteText("("); break;    
    case BASIC_RPAR_:   txbEntry->WriteText(")"); break;    
    case BASIC_SQ_:     txbEntry->WriteText("^2"); break;
    case BASIC_SQRT_:   txbEntry->WriteText("sqrt("); break;    
    case BASIC_DOT_:    txbEntry->WriteText("."); break;    
    case BASIC_ANS_:    txbEntry->WriteText("ans"); break;    
    case BASIC_C_:      txbEntry->SetValue(""); break;
    case BASIC_CE_:     txbEntry->SetValue(""); break;
    case BASIC_EQ_:     
    default: evalEntry(event); break;
    }
 
    std::cout << "ok" << '\n';

}


// destructor

FormCalc::~FormCalc()
{
    
}