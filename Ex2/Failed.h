#pragma once


// Failed �Ի���

class Failed : public CDialogEx
{
	DECLARE_DYNAMIC(Failed)

public:
	Failed(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Failed();

// �Ի�������
	enum { IDD = IDD_FAILED };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
