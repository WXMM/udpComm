
// testDlg.h : 头文件
#pragma once
#include "afxwin.h"
#include "udpComm.h"

// CtestDlg 对话框
class CtestDlg : public CDialogEx
{
// 构造
public:
	CtestDlg(CWnd* pParent = NULL);	// 标准构造函数
// 对话框数据
	enum { IDD = IDD_TEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP();
	


public:
	//线程相关的成员  数据处理相关的数据变量
	udpComm      *udpC;
	CWinThread*  m_Thread1;
	void         recvDta();
	static UINT  thread1_func(LPVOID pParam);
	double       bufferDta[20][20];
	CEdit comm1_1;
	CEdit comm1_2;
	CEdit comm1_proc;
	CEdit comm2_1;
	CEdit comm2_2;
	CEdit comm2_proc;
	CEdit comm3_proc;
	CEdit comm4_proc;
	CEdit comm5_proc;
	CEdit comm6_proc;
	CEdit comm7_proc;
	CEdit comm8_proc;
	CEdit comm9_proc;
	CEdit comm10_proc;
	CEdit comm11_proc;
	CEdit comm12_proc;
	CEdit comm13_proc;
	CEdit comm14_proc;
	CEdit comm15_proc;
	CEdit comm16_proc;
	CEdit comm17_proc;
	CEdit comm18_proc;
	CEdit comm19_proc;
	CEdit comm20_proc;
	CEdit comm21_proc;
	CEdit comm22_proc;
	CEdit comm23_proc;
	CEdit comm24_proc;
	CEdit comm3_1;
	CEdit comm3_2;
	CEdit comm4_1;
	CEdit comm4_2;
	CEdit comm5_1;
	CEdit comm5_2;
	CEdit comm6_1;
	CEdit comm6_2;
	CEdit comm7_1;
	CEdit comm7_2;
	CEdit comm8_1;
	CEdit comm8_2;
	CEdit comm9_1;
	CEdit comm9_2;
	CEdit comm10_1;
	CEdit comm10_2;
	CEdit comm11_1;
	CEdit comm11_2;
	CEdit comm12_1;
	CEdit comm12_2;
	CEdit comm24_1;
	CEdit comm24_2;
	CEdit comm23_1;
	CEdit comm23_2;
	CEdit comm22_1;
	CEdit comm22_2;
	CEdit comm21_1;
	CEdit comm21_2;
	CEdit comm20_1;
	CEdit comm20_2;
	CEdit comm19_1;
	CEdit comm19_2;
	CEdit comm18_1;
	CEdit comm18_2;
	CEdit comm17_1;
	CEdit comm17_2;
	CEdit comm16_1;
	CEdit comm16_2;
	CEdit comm15_1;
	CEdit comm15_2;
	CEdit comm14_1;
	afx_msg void OnEnChangeEdit37();
	afx_msg void OnEnChangeEdit36();
	CEdit comm13_2;
	CEdit comm13_1;
	CComboBox connecter;
	CComboBox m_dataPro;
	CEdit comm14_2;
	afx_msg void OnBnClickedButton2();

public:
	CFile setFile_;
	CFile logFile_;
	bool  isWrite;
	int connectArr[30][30];
	int connecterIndex;
	CButton m_writeLog;
	afx_msg void OnBnClickedButton3();
	CStatic m_comm1Text;
	CStatic m_comm2Text;
	CStatic m_comm3Text;
	CStatic m_comm4Text;
	CStatic m_comm5Text;
	CStatic m_comm6Text;
	CStatic m_comm7Text;
	CStatic m_comm8Text;
	CStatic m_comm9Text;
	CStatic m_comm10Text;
	CStatic m_comm11Text;
	CStatic m_comm12Text;
	CStatic m_comm13Text;
	CStatic m_comm14Text;
	CStatic m_comm15Text;
	CStatic m_comm16Text;
	CStatic m_comm17Text;
	CStatic m_comm18Text;
	CStatic m_comm19Text;
	CStatic m_comm20Text;
	CStatic m_comm21Text;
	CStatic m_comm22Text;
	CStatic m_comm23Text;
	CStatic m_comm24Text;
};
