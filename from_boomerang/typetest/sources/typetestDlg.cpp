// typetestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "typetest.h"
#include "typetestDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTypetestDlg dialog

CTypetestDlg::CTypetestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTypetestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTypetestDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTypetestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTypetestDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTypetestDlg, CDialog)
	//{{AFX_MSG_MAP(CTypetestDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTypetestDlg message handlers

BOOL CTypetestDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTypetestDlg::OnPaint() 
{
	CPaintDC dc(this); // device context for painting


	// Switch to metric coordinates
	dc.SetMapMode(MM_LOMETRIC);


	// Fill the square with colour
	CBrush yellow(RGB(0xFF,0xFF, 0xC0));		// Light yellow
	dc.FillRect(CRect(100, -100, 600, -600), &yellow);
	
	int x = 100;
	for (int i=0; i <= 10; i++) {
		dc.MoveTo(x, -600);
		dc.LineTo(700-x, -100);
		// Now x is used in the y direction
		dc.MoveTo(100, -x);
		dc.LineTo(600, -(700-x));
		x += 50;
	}
	CPen fat(PS_SOLID, 30, RGB(255, 0, 0));		// Fat red pen
	CPen* oldPen = dc.SelectObject(&fat);
	dc.MoveTo(100, -100);
	dc.LineTo(100, -600);
	dc.LineTo(600, -600);
	dc.LineTo(600, -100);
	dc.LineTo(100, -100);
	dc.SelectObject(&oldPen);

	char* szFading = "Fading...";
	x = 700; int y = -600;
	float size = 500;
	dc.SetTextAlign(TA_BASELINE);
	dc.SetBkMode(TRANSPARENT);
	for (int j=0; j < 9; j++) {
		CFont arial;
		arial.CreateFont((int)-size, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
			VARIABLE_PITCH | FF_SWISS, "Arial");
		CFont* oldFont = dc.SelectObject(&arial);
		dc.TextOut(x, y, szFading+j, 1);
		CSize szExtent = dc.GetTextExtent(szFading+j, 1);
		x += szExtent.cx;
		dc.SelectObject(&oldFont);
		size *= 0.8f;		// Next char only 80% as large
	}

}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTypetestDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
