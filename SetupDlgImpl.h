#ifndef __SetupDlgImpl__
#define __SetupDlgImpl__

/**
@file
Subclass of SetupDlg, which is generated by wxFormBuilder.
*/

#include "GUIFrame.h"

/** Implementing SetupDlg */
class SetupDlgImpl : public SetupDlg
{
public:
	/** Constructor */
	SetupDlgImpl( wxWindow* parent );

	wxString GetExten();
	wxString GetRecFileForm();

	void SetExten(const wxString& str);
	void SetRecForm(const wxString& str);
};

#endif // __SetupDlgImpl__