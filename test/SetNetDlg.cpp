// SetNetDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "test.h"
#include "SetNetDlg.h"
#include "afxdialogex.h"


// CSetNetDlg 对话框

IMPLEMENT_DYNAMIC(CSetNetDlg, CDialogEx)

CSetNetDlg::CSetNetDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSetNetDlg::IDD, pParent)
{

}

CSetNetDlg::~CSetNetDlg()
{
}

void CSetNetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSetNetDlg, CDialogEx)
END_MESSAGE_MAP()


// CSetNetDlg 消息处理程序
