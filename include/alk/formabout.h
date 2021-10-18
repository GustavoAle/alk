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

#ifndef ALK_FORMABOUT_H
#define ALK_FORMABOUT_H

#include <forms/formaboutwx.h>
#include <wx/wx.h>

class FormAbout : public FormAboutWX
{
public:
    FormAbout(
        wxWindow* parent, 
        wxWindowID id = wxID_ANY, 
        const wxString& title = wxEmptyString, 
        const wxPoint& pos = wxDefaultPosition, 
        const wxSize& size = wxSize( -1,-1 ), 
        long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL
    );

    ~FormAbout();
};

#endif