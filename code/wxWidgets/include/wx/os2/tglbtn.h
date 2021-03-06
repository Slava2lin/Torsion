/////////////////////////////////////////////////////////////////////////////
// Name:        wx/os2/tglbtn.h
// Purpose:     Declaration of the wxToggleButton class, which implements a
//              toggle button under wxOS2.
// Author:      Dave Webster
// Modified by:
// Created:     08.02.01
// RCS-ID:      $Id: tglbtn.h,v 1.1 2005/04/07 04:04:37 DW Exp $
// Copyright:   (c) 2005 David A Webster
// License:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_TOGGLEBUTTON_H_
#define _WX_TOGGLEBUTTON_H_

extern WXDLLEXPORT_DATA(const wxChar*) wxCheckBoxNameStr;

// Checkbox item (single checkbox)
class WXDLLEXPORT wxToggleButton : public wxControl
{
public:
    wxToggleButton() {}
    wxToggleButton(wxWindow *parent,
                   wxWindowID id,
                   const wxString& label,
                   const wxPoint& pos = wxDefaultPosition,
                   const wxSize& size = wxDefaultSize,
                   long style = 0,
                   const wxValidator& validator = wxDefaultValidator,
                   const wxString& name = wxCheckBoxNameStr)
    {
        Create(parent, id, label, pos, size, style, validator, name);
    }

    bool Create(wxWindow *parent,
                wxWindowID id,
                const wxString& label,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = 0,
                const wxValidator& validator = wxDefaultValidator,
                const wxString& name = wxCheckBoxNameStr);

    virtual void SetValue(bool value);
    virtual bool GetValue() const ;

    virtual bool OS2Command(WXUINT param, WXWORD id);
    virtual void Command(wxCommandEvent& event);

protected:
    virtual wxSize DoGetBestSize() const;
    virtual wxBorder GetDefaultBorder() const;
    virtual WXDWORD OS2GetStyle(long flags, WXDWORD *exstyle = NULL) const;

private:
    DECLARE_DYNAMIC_CLASS_NO_COPY(wxToggleButton)
};

#endif // _WX_TOGGLEBUTTON_H_

