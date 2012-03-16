// typetestDlg.h : header file
//

#if !defined(AFX_TYPETESTDLG_H__7551B2A5_B346_47AA_ACCB_06EDCD992FBE__INCLUDED_)
#define AFX_TYPETESTDLG_H__7551B2A5_B346_47AA_ACCB_06EDCD992FBE__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

/////////////////////////////////////////////////////////////////////////////
// CTypetestDlg dialog

class CTypetestDlg : public CDialog
{
// Construction
public:
	CTypetestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTypetestDlg)
	enum { IDD = IDD_TYPETEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTypetestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTypetestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TYPETESTDLG_H__7551B2A5_B346_47AA_ACCB_06EDCD992FBE__INCLUDED_)
