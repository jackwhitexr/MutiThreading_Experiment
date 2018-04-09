#pragma once


// Validation 对话框

class Validation : public CDialogEx
{
	DECLARE_DYNAMIC(Validation)

public:
	Validation(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Validation();

// 对话框数据
	enum { IDD = IDD_VALIDATION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
};
