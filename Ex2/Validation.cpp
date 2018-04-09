// Validation.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Ex2.h"
#include "Validation.h"
#include "afxdialogex.h"
#include "Success.h"
#include "Failed.h"

CCriticalSection validation_section; //���ȵ��ٽ���
// Validation �Ի���

IMPLEMENT_DYNAMIC(Validation, CDialogEx)

Validation::Validation(CWnd* pParent /*=NULL*/)
	: CDialogEx(Validation::IDD, pParent)
{

}

Validation::~Validation()
{
}

void Validation::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Validation, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &Validation::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &Validation::OnBnClickedOk)
END_MESSAGE_MAP()


// Validation ��Ϣ�������


void Validation::OnBnClickedCancel()
{
	CDialogEx::OnCancel();
}

//��������
void Validation::OnBnClickedOk()
{
	validation_section.Lock();
	CString number;
	GetDlgItem(IDC_EDIT1)->GetWindowText(number);
	CString save_number,save_name;
	CStdioFile file(_T("DATA"),CFile::modeReadWrite);
	while (file.ReadString(save_number)){
		file.ReadString(save_name);
		if (save_number.Compare(number)==0){
			Success success;
			success.DoModal();
			return;
		}
	}
	Failed failed;
	failed.DoModal();
	file.Close();
	validation_section.Unlock();
}
