// CreateFailed.cpp : 实现文件
//

#include "stdafx.h"
#include "Ex2.h"
#include "CreateFailed.h"
#include "afxdialogex.h"


// CreateFailed 对话框

IMPLEMENT_DYNAMIC(CreateFailed, CDialogEx)

CreateFailed::CreateFailed(CWnd* pParent /*=NULL*/)
	: CDialogEx(CreateFailed::IDD, pParent)
{

}

CreateFailed::~CreateFailed()
{
}

void CreateFailed::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CreateFailed, CDialogEx)
END_MESSAGE_MAP()


// CreateFailed 消息处理程序
