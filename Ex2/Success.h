#pragma once


// Success 对话框

class Success : public CDialogEx
{
	DECLARE_DYNAMIC(Success)

public:
	Success(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Success();

// 对话框数据
	enum { IDD = IDD_CONFIRM };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
