// Failed.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Ex2.h"
#include "Failed.h"
#include "afxdialogex.h"


// Failed �Ի���

IMPLEMENT_DYNAMIC(Failed, CDialogEx)

Failed::Failed(CWnd* pParent /*=NULL*/)
	: CDialogEx(Failed::IDD, pParent)
{

}

Failed::~Failed()
{
}

void Failed::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Failed, CDialogEx)
END_MESSAGE_MAP()


// Failed ��Ϣ�������
