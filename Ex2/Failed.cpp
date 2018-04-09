// Failed.cpp : 实现文件
//

#include "stdafx.h"
#include "Ex2.h"
#include "Failed.h"
#include "afxdialogex.h"


// Failed 对话框

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


// Failed 消息处理程序
