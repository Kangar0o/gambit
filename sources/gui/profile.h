//
// $Source$
// $Date$
// $Revision$
//
// DESCRIPTION:
// Window for displaying profiles
//
// This file is part of Gambit
// Copyright (c) 2002, The Gambit Project
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
//

#ifndef NFGPROFILE_H
#define NFGPROFILE_H

#include "wx/grid.h"
#include "nfgshow.h"

class gbtProfileGrid;

class gbtProfileFrame : public wxFrame, public gbtGameView {
private:
  gbtProfileGrid *m_grid;

  // Event handlers
  void OnClose(wxCloseEvent &);

  void OnViewInfo(wxCommandEvent &);
  void OnViewBehavior(wxCommandEvent &);
  void OnViewMixed(wxCommandEvent &);
  void OnViewGrid(wxCommandEvent &);
  void OnViewMyerson(wxCommandEvent &);
  void OnViewVector(wxCommandEvent &);

  // Overriding view members
  bool IsEfgView(void) const { return true; }
  bool IsNfgView(void) const { return true; }
  void OnUpdate(gbtGameView *);

public:
  gbtProfileFrame(gbtGameDocument *p_doc, wxWindow *p_parent);
  virtual ~gbtProfileFrame();

  DECLARE_EVENT_TABLE()
};

#endif  // NFGPROFILE_H