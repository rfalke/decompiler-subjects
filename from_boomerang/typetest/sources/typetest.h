// typetest.h : main header file for the TYPETEST application
//

#if !defined(AFX_TYPETEST_H__15DB3D1E_B6AF_4775_BDEE_7ABFE658CCE1__INCLUDED_)
#define AFX_TYPETEST_H__15DB3D1E_B6AF_4775_BDEE_7ABFE658CCE1__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTypetestApp:
// See typetest.cpp for the implementation of this class
//

class CTypetestApp : public CWinApp
{
public:
	CTypetestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTypetestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTypetestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TYPETEST_H__15DB3D1E_B6AF_4775_BDEE_7ABFE658CCE1__INCLUDED_)
