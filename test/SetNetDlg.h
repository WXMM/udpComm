#pragma once


// CSetNetDlg �Ի���

class CSetNetDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSetNetDlg)

public:
	CSetNetDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSetNetDlg();

// �Ի�������
	enum { IDD = IDD_SETNET_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
