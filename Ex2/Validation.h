#pragma once


// Validation �Ի���

class Validation : public CDialogEx
{
	DECLARE_DYNAMIC(Validation)

public:
	Validation(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Validation();

// �Ի�������
	enum { IDD = IDD_VALIDATION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
};
