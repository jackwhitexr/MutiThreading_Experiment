#pragma once


// CreateFailed 对话框

class CreateFailed : public CDialogEx
{
	DECLARE_DYNAMIC(CreateFailed)

public:
	CreateFailed(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CreateFailed();

// 对话框数据
	enum { IDD = IDD_CREATEFAILED };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
