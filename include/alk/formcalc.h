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

#ifndef ALK_FORMCALC_H
#define ALK_FORMCALC_H

#include <wx/wx.h>

#include <forms/formcalcwx.h>

#include <alk/formabout.h>
#include <alk/luavm.h>

class FormCalc : public FormCalcWX
{
protected:
    virtual void histRerun( wxCommandEvent& event );
    virtual void evalEntry( wxCommandEvent& event );
    virtual void viewAbout( wxCommandEvent& event );
    virtual void focusEntry( wxFocusEvent& event );
    virtual void toggleMode( wxCommandEvent& event );
    virtual void basicButton( wxCommandEvent& event );
    virtual void resizeWidgets( wxSizeEvent& event );
		
    LuaVM *luaVM;

    FormAbout *formAbout = NULL;

public:
    FormCalc(
        wxWindow* parent, 
        wxWindowID id = wxID_ANY, 
        const wxString& title = wxT("Alk"), 
        const wxPoint& pos = wxDefaultPosition, 
        const wxSize& size = wxSize( -1,-1 ), 
        long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL 
    );

    void setLuaVM(LuaVM *luaVM)
    {
        this->luaVM = luaVM;
    }

    ~FormCalc();
};

#endif