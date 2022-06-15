#include "../Headers/mainframe.h"

void myFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
};

myFrame::myFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800,500))
{
    wxMenu *File = new wxMenu();
    File->Append(wxID_EXIT, "&Exit\tAlt-Q");
    wxMenuBar *menubar = new wxMenuBar();
    menubar->Append(File, "&File");
    SetMenuBar(menubar);

    
    wxStaticText *txt = new wxStaticText(this, -1, wxT("This wxWidgets application was written as a demo for the makefile example."));

    CreateStatusBar(2);
    SetStatusText("Makefile Demo");
    SetMinSize(wxSize(800,500));
};

BEGIN_EVENT_TABLE(myFrame, wxFrame)
    EVT_MENU(wxID_EXIT, myFrame::OnExit)
END_EVENT_TABLE()