#pragma once


// Success �Ի���

class Success : public CDialogEx
{
	DECLARE_DYNAMIC(Success)

public:
	Success(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Success();

// �Ի�������
	enum { IDD = IDD_CONFIRM };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
