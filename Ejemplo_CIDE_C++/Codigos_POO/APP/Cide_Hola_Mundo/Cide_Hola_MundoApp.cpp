/***************************************************************
 * Name:      Cide_Hola_MundoApp.cpp
 * Purpose:   Code for Application Class
 * Author:    HHTN (Harol.Torres.Neuta@outlook.com)
 * Created:   2021-02-15
 * Copyright: HHTN ()
 * License:
 **************************************************************/

#include "Cide_Hola_MundoApp.h"

//(*AppHeaders
#include "Cide_Hola_MundoMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Cide_Hola_MundoApp);

bool Cide_Hola_MundoApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Cide_Hola_MundoFrame* Frame = new Cide_Hola_MundoFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
