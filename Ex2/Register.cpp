// Register.cpp : 实现文件
//

#include "stdafx.h"
#include "Ex2.h"
#include "Register.h"
#include "afxdialogex.h"
#include "resource.h"
#include "Success.h"
#include "Failed.h"
#include "CreateSuccess.h"
#include "CreateFailed.h"

// Register 对话框

CCriticalSection register_section;

IMPLEMENT_DYNAMIC(Register, CDialogEx)

Register::Register(CWnd* pParent /*=NULL*/)
	: CDialogEx(Register::IDD, pParent)
{

}

Register::~Register()
{
}

void Register::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Register, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &Register::OnBnClickedCancel)
	ON_BN_CLICKED(IDGO, &Register::OnBnClickedGO)
END_MESSAGE_MAP()


// Register 消息处理程序


void Register::OnBnClickedCancel()
{
	CDialogEx::OnCancel();
}


void Register::OnBnClickedGO()
{
	register_section.Lock();
	CString number, name;
	GetDlgItem(IDC_EDIT1)->GetWindowText(number);
	GetDlgItem(IDC_EDIT2)->GetWindowText(name);
	if (name == "" || number == ""){
		CreateFailed cf;
		cf.DoModal();
		return;
	}
	CStdioFile file(_T("DATA"), CFile::modeReadWrite);
	file.SeekToEnd();
	file.WriteString(number + "\n");
	file.WriteString(name + "\n");
	file.Close();
	CreateSuccess cs;
	cs.DoModal();
	register_section.Unlock();
}
