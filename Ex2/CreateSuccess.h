#pragma once


// CreateSuccess 对话框

class CreateSuccess : public CDialogEx
{
	DECLARE_DYNAMIC(CreateSuccess)

public:
	CreateSuccess(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CreateSuccess();

// 对话框数据
	enum { IDD = IDD_CREATESUCCESS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
