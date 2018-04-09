// CreateSuccess.cpp : 实现文件
//

#include "stdafx.h"
#include "Ex2.h"
#include "CreateSuccess.h"
#include "afxdialogex.h"


// CreateSuccess 对话框

IMPLEMENT_DYNAMIC(CreateSuccess, CDialogEx)

CreateSuccess::CreateSuccess(CWnd* pParent /*=NULL*/)
	: CDialogEx(CreateSuccess::IDD, pParent)
{

}

CreateSuccess::~CreateSuccess()
{
}

void CreateSuccess::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CreateSuccess, CDialogEx)
END_MESSAGE_MAP()


// CreateSuccess 消息处理程序
