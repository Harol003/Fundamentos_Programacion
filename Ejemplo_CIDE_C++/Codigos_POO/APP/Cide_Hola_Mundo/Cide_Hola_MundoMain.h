/***************************************************************
 * Name:      Cide_Hola_MundoMain.h
 * Purpose:   Defines Application Frame
 * Author:    HHTN (Harol.Torres.Neuta@outlook.com)
 * Created:   2021-02-15
 * Copyright: HHTN ()
 * License:
 **************************************************************/

#ifndef CIDE_HOLA_MUNDOMAIN_H
#define CIDE_HOLA_MUNDOMAIN_H

//(*Headers(Cide_Hola_MundoFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class Cide_Hola_MundoFrame: public wxFrame
{
    public:

        Cide_Hola_MundoFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Cide_Hola_MundoFrame();

    private:

        //(*Handlers(Cide_Hola_MundoFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(Cide_Hola_MundoFrame)
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Cide_Hola_MundoFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CIDE_HOLA_MUNDOMAIN_H
