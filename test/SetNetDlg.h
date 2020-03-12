#pragma once


// CSetNetDlg 对话框

class CSetNetDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSetNetDlg)

public:
	CSetNetDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSetNetDlg();

// 对话框数据
	enum { IDD = IDD_SETNET_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
