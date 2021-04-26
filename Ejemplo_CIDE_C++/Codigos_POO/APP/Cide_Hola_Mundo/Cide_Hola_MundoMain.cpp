/***************************************************************
 * Name:      Cide_Hola_MundoMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    HHTN (Harol.Torres.Neuta@outlook.com)
 * Created:   2021-02-15
 * Copyright: HHTN ()
 * License:
 **************************************************************/

#include "Cide_Hola_MundoMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Cide_Hola_MundoFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Cide_Hola_MundoFrame)
const long Cide_Hola_MundoFrame::ID_TEXTCTRL1 = wxNewId();
const long Cide_Hola_MundoFrame::ID_TEXTCTRL2 = wxNewId();
const long Cide_Hola_MundoFrame::ID_BUTTON1 = wxNewId();
const long Cide_Hola_MundoFrame::ID_TEXTCTRL3 = wxNewId();
const long Cide_Hola_MundoFrame::ID_STATICTEXT1 = wxNewId();
const long Cide_Hola_MundoFrame::ID_STATICTEXT2 = wxNewId();
const long Cide_Hola_MundoFrame::ID_STATICTEXT3 = wxNewId();
const long Cide_Hola_MundoFrame::ID_STATICTEXT4 = wxNewId();
const long Cide_Hola_MundoFrame::ID_MENUITEM1 = wxNewId();
const long Cide_Hola_MundoFrame::idMenuAbout = wxNewId();
const long Cide_Hola_MundoFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Cide_Hola_MundoFrame,wxFrame)
    //(*EventTable(Cide_Hola_MundoFrame)
    //*)
END_EVENT_TABLE()

Cide_Hola_MundoFrame::Cide_Hola_MundoFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Cide_Hola_MundoFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(400,278));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxPoint(112,96), wxSize(240,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("Text"), wxPoint(112,56), wxSize(240,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    Button1 = new wxButton(this, ID_BUTTON1, _("SUMAR"), wxPoint(192,136), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, _("Text"), wxPoint(112,168), wxSize(240,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("X = "), wxPoint(80,64), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Y ="), wxPoint(80,104), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("X + Y ="), wxPoint(64,168), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("CIDE - HHTN PROGRAMACION"), wxPoint(128,24), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&Cide_Hola_MundoFrame::OnTextCtrl1Text);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Cide_Hola_MundoFrame::OnButton1Click);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Cide_Hola_MundoFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Cide_Hola_MundoFrame::OnAbout);
    //*)
}

Cide_Hola_MundoFrame::~Cide_Hola_MundoFrame()
{
    //(*Destroy(Cide_Hola_MundoFrame)
    //*)
}

void Cide_Hola_MundoFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Cide_Hola_MundoFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Cide_Hola_MundoFrame::OnTextCtrl1Text(wxCommandEvent& event)
{
}

void Cide_Hola_MundoFrame::OnButton1Click(wxCommandEvent& event)
{
    Long x=0, y=0;}
    wxString res=wxT("");
    if (TexCrtl1->GetValue().ToLong((&x))) and TextCrtl2 -> GetValue (). Tolong ((&y))
    {
        res<<x+y;
        TexCtrl3->SetValue(res);
    }
    Else wsMessageBox ((wxt("Hay un error!")));
}
