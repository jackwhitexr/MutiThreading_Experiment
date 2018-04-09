// Success.cpp : 实现文件
//

#include "stdafx.h"
#include "Ex2.h"
#include "Success.h"
#include "afxdialogex.h"


// Success 对话框

IMPLEMENT_DYNAMIC(Success, CDialogEx)

Success::Success(CWnd* pParent /*=NULL*/)
	: CDialogEx(Success::IDD, pParent)
{

}

Success::~Success()
{
}

void Success::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Success, CDialogEx)
END_MESSAGE_MAP()


// Success 消息处理程序
