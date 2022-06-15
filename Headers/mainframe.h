#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "precom.h"

class myFrame : public wxFrame
{
    public:
        myFrame(const wxString& title);

        void OnExit(wxCommandEvent& event);
        
    private:
        DECLARE_EVENT_TABLE();
};


#endif