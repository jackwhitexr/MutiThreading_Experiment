#pragma once


// CreateFailed �Ի���

class CreateFailed : public CDialogEx
{
	DECLARE_DYNAMIC(CreateFailed)

public:
	CreateFailed(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CreateFailed();

// �Ի�������
	enum { IDD = IDD_CREATEFAILED };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
