#pragma once


// Failed 对话框

class Failed : public CDialogEx
{
	DECLARE_DYNAMIC(Failed)

public:
	Failed(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Failed();

// 对话框数据
	enum { IDD = IDD_FAILED };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
