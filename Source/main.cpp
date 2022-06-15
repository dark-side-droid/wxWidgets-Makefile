#include "../Headers/precom.h"
#include "../Headers/mainframe.h"

class myApp : public wxApp
{
    public:
        virtual bool OnInit();
};


bool myApp::OnInit()
{
    myFrame *nFrame = new myFrame(wxString("App window"));
    nFrame->Show(true);
    return true;
};



IMPLEMENT_APP(myApp)