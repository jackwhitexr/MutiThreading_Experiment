#pragma once


// CreateSuccess �Ի���

class CreateSuccess : public CDialogEx
{
	DECLARE_DYNAMIC(CreateSuccess)

public:
	CreateSuccess(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CreateSuccess();

// �Ի�������
	enum { IDD = IDD_CREATESUCCESS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
