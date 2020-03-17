
// testDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test.h"
#include "testDlg.h"
#include "afxdialogex.h"
#include "udpComm.h"
#include "SetNetDlg.h"
#include "string.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}


void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CtestDlg �Ի���




CtestDlg::CtestDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CtestDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CtestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT2, comm1_1);
	DDX_Control(pDX, IDC_EDIT3, comm1_2);
	DDX_Control(pDX, IDC_EDIT8, comm1_proc);
	DDX_Control(pDX, IDC_EDIT4, comm2_1);
	DDX_Control(pDX, IDC_EDIT5, comm2_2);
	DDX_Control(pDX, IDC_EDIT10, comm2_proc);
	DDX_Control(pDX, IDC_EDIT9, comm3_proc);
	DDX_Control(pDX, IDC_EDIT53, comm4_proc);
	DDX_Control(pDX, IDC_EDIT54, comm5_proc);
	DDX_Control(pDX, IDC_EDIT55, comm6_proc);
	DDX_Control(pDX, IDC_EDIT56, comm7_proc);
	DDX_Control(pDX, IDC_EDIT57, comm8_proc);
	DDX_Control(pDX, IDC_EDIT58, comm9_proc);
	DDX_Control(pDX, IDC_EDIT59, comm10_proc);
	DDX_Control(pDX, IDC_EDIT60, comm11_proc);
	DDX_Control(pDX, IDC_EDIT61, comm12_proc);
	DDX_Control(pDX, IDC_EDIT62, comm13_proc);
	DDX_Control(pDX, IDC_EDIT63, comm14_proc);
	DDX_Control(pDX, IDC_EDIT64, comm15_proc);
	DDX_Control(pDX, IDC_EDIT65, comm16_proc);
	DDX_Control(pDX, IDC_EDIT66, comm17_proc);
	DDX_Control(pDX, IDC_EDIT67, comm18_proc);
	DDX_Control(pDX, IDC_EDIT68, comm19_proc);
	DDX_Control(pDX, IDC_EDIT69, comm20_proc);
	DDX_Control(pDX, IDC_EDIT70, comm21_proc);
	DDX_Control(pDX, IDC_EDIT71, comm22_proc);
	DDX_Control(pDX, IDC_EDIT72, comm23_proc);
	DDX_Control(pDX, IDC_EDIT73, comm24_proc);
	DDX_Control(pDX, IDC_EDIT6, comm3_1);
	DDX_Control(pDX, IDC_EDIT7, comm3_2);
	DDX_Control(pDX, IDC_EDIT11, comm4_1);
	DDX_Control(pDX, IDC_EDIT12, comm4_2);
	DDX_Control(pDX, IDC_EDIT13, comm5_1);
	DDX_Control(pDX, IDC_EDIT14, comm5_2);
	DDX_Control(pDX, IDC_EDIT15, comm6_1);
	DDX_Control(pDX, IDC_EDIT16, comm6_2);
	DDX_Control(pDX, IDC_EDIT17, comm7_1);
	DDX_Control(pDX, IDC_EDIT18, comm7_2);
	DDX_Control(pDX, IDC_EDIT19, comm8_1);
	DDX_Control(pDX, IDC_EDIT20, comm8_2);
	DDX_Control(pDX, IDC_EDIT21, comm9_1);
	DDX_Control(pDX, IDC_EDIT22, comm9_2);
	DDX_Control(pDX, IDC_EDIT23, comm10_1);
	DDX_Control(pDX, IDC_EDIT24, comm10_2);
	DDX_Control(pDX, IDC_EDIT25, comm11_1);
	DDX_Control(pDX, IDC_EDIT26, comm11_2);
	DDX_Control(pDX, IDC_EDIT27, comm12_1);
	DDX_Control(pDX, IDC_EDIT28, comm12_2);
	DDX_Control(pDX, IDC_EDIT51, comm24_1);
	DDX_Control(pDX, IDC_EDIT52, comm24_2);
	DDX_Control(pDX, IDC_EDIT49, comm23_1);
	DDX_Control(pDX, IDC_EDIT50, comm23_2);
	DDX_Control(pDX, IDC_EDIT47, comm22_1);
	DDX_Control(pDX, IDC_EDIT48, comm22_2);
	DDX_Control(pDX, IDC_EDIT45, comm21_1);
	DDX_Control(pDX, IDC_EDIT46, comm21_2);
	DDX_Control(pDX, IDC_EDIT43, comm20_1);
	DDX_Control(pDX, IDC_EDIT44, comm20_2);
	DDX_Control(pDX, IDC_EDIT35, comm19_1);
	DDX_Control(pDX, IDC_EDIT42, comm19_2);
	DDX_Control(pDX, IDC_EDIT34, comm18_1);
	DDX_Control(pDX, IDC_EDIT41, comm18_2);
	DDX_Control(pDX, IDC_EDIT33, comm17_1);
	DDX_Control(pDX, IDC_EDIT40, comm17_2);
	DDX_Control(pDX, IDC_EDIT32, comm16_1);
	DDX_Control(pDX, IDC_EDIT39, comm16_2);
	DDX_Control(pDX, IDC_EDIT31, comm15_1);
	DDX_Control(pDX, IDC_EDIT38, comm15_2);
	DDX_Control(pDX, IDC_EDIT30, comm14_1);
	DDX_Control(pDX, IDC_EDIT36, comm13_2);
	DDX_Control(pDX, IDC_EDIT29, comm13_1);
	DDX_Control(pDX, IDC_COMBO1, connecter);
	DDX_Control(pDX, IDC_COMBO2, m_dataPro);
	DDX_Control(pDX, IDC_EDIT37, comm14_2);
	DDX_Control(pDX, IDC_BUTTON3, m_writeLog);
	DDX_Control(pDX, IDC_STATIC1, m_comm1Text);
	DDX_Control(pDX, IDC_STATIC2, m_comm2Text);
	DDX_Control(pDX, IDC_STATIC3, m_comm3Text);
	DDX_Control(pDX, IDC_STATIC4, m_comm4Text);
	DDX_Control(pDX, IDC_STATIC5, m_comm5Text);
	DDX_Control(pDX, IDC_STATIC6, m_comm6Text);
	DDX_Control(pDX, IDC_STATIC7, m_comm7Text);
	DDX_Control(pDX, IDC_STATIC8, m_comm8Text);
	DDX_Control(pDX, IDC_STATIC9, m_comm9Text);
	DDX_Control(pDX, IDC_STATIC10, m_comm10Text);
	DDX_Control(pDX, IDC_STATIC11, m_comm11Text);
	DDX_Control(pDX, IDC_STATIC12, m_comm12Text);
	DDX_Control(pDX, IDC_STATIC13, m_comm13Text);
	DDX_Control(pDX, IDC_STATIC14, m_comm14Text);
	DDX_Control(pDX, IDC_STATIC15, m_comm15Text);
	DDX_Control(pDX, IDC_STATIC16, m_comm16Text);
	DDX_Control(pDX, IDC_STATIC17, m_comm17Text);
	DDX_Control(pDX, IDC_STATIC18, m_comm18Text);
	DDX_Control(pDX, IDC_STATIC19, m_comm19Text);
	DDX_Control(pDX, IDC_STATIC20, m_comm20Text);
	DDX_Control(pDX, IDC_STATIC21, m_comm21Text);
	DDX_Control(pDX, IDC_STATIC22, m_comm22Text);
	DDX_Control(pDX, IDC_STATIC23, m_comm23Text);
	DDX_Control(pDX, IDC_STATIC24, m_comm24Text);
}

BEGIN_MESSAGE_MAP(CtestDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT37, &CtestDlg::OnEnChangeEdit37)
	ON_EN_CHANGE(IDC_EDIT36, &CtestDlg::OnEnChangeEdit36)
	ON_BN_CLICKED(IDC_BUTTON2, &CtestDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CtestDlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CtestDlg ��Ϣ�������

BOOL CtestDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	isWrite = 0;
	char GetStr[4096] = {0};
	//��ȡ�����ļ�
	memset(connectArr,0,sizeof(connectArr));
	setFile_.Open(_T("..//doc//config.txt"),CFile::modeRead);
	setFile_.Read(GetStr,4096);
	int nlen = setFile_.GetLength();//��ȡ�ļ��ܳ���
	CString strTemp;
	int xcIndex=0,ycIndex=0;
	for(int i=0;i<nlen;i++){
		if(GetStr[i]==' '){
			connectArr[xcIndex][ycIndex++] =  _ttoi(strTemp);
			strTemp = "";
			continue;
		}else if(GetStr[i]=='\n'){
			connectArr[xcIndex++][ycIndex] =  _ttoi(strTemp);
			strTemp = "";
			continue;
		}
		strTemp+=GetStr[i];	
	}
	//�ر��ļ�
	setFile_.Close();
	
	for(int i=1;i<=10;i++){
		strTemp.Format(_T("������%d"),i);
		connecter.AddString(strTemp);
    }
	connecter.SetCurSel(connectArr[0][0]-1);

	for(int i=1;i<=3;i++){
		strTemp.Format(_T("�㷨%d"),i);
		m_dataPro.AddString(strTemp);
    }
	m_dataPro.SetCurSel(0);


	//����ͨ������ͨ������
	CString commTem;
	commTem.Format(_T("ͨ��%2d��"),1);

	m_comm1Text.SetWindowTextW(commTem);

	(udpComm*)udpC = new udpComm();
	m_Thread1 = AfxBeginThread(CtestDlg::thread1_func, this , THREAD_PRIORITY_NORMAL ,0 ,0,NULL);
	
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CtestDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CtestDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CtestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
void CtestDlg::recvDta(){
	int tempDtaArr[20][400]={0},tempDtaArrIndex1=0,tempDtaArrIndex2=0;
	
	//������־�ļ�
	CString logPath,m_strDate;
	CTime m_time;  
    m_time=CTime::GetCurrentTime();                       //��ȡ��ǰʱ������  
    m_strDate=m_time.Format(_T("%Y%m%d%H%M%S"));          //��ʽ������  
	logPath.Format(_T("..//log//%s.log"),m_strDate);
	logFile_.Open(logPath,CFile::modeCreate|CFile::modeWrite|CFile::modeNoTruncate);
	while(1){
		bool res = udpC->recvUdpDta();
		char *tempDat = udpC->buffer;
		if(res != 0 && (unsigned char)tempDat[0] == 0xeb && (unsigned char)tempDat[1] == 0x90){
			if(tempDtaArrIndex1<10 || tempDtaArrIndex2<10){
				int indexTemp;
				if((unsigned char)tempDat[7] == 0x04  && (unsigned char)tempDat[8] == 0x0b){
					if(tempDtaArrIndex1>=10) continue;
					for(int i=34;i<2300;i+=12){	
						indexTemp = (unsigned int)(tempDat[i]);
						tempDtaArr[tempDtaArrIndex1][indexTemp] = ((unsigned char)tempDat[i+2]<<24)+((unsigned char)tempDat[i+3]<<16)+((unsigned char)tempDat[i+4]<<8)+(unsigned char)tempDat[i+5];
						tempDtaArr[10][indexTemp] += tempDtaArr[tempDtaArrIndex1][indexTemp];
					}
					tempDtaArrIndex1++;
				}else{
					if(tempDtaArrIndex2>=10) continue;
					for(int i=34;i<2300;i+=12){
						indexTemp = (unsigned int)(tempDat[i])+200;
						tempDtaArr[tempDtaArrIndex2][indexTemp] = ((unsigned char)tempDat[i+2]<<24)+((unsigned char)tempDat[i+3]<<16)+((unsigned char)tempDat[i+4]<<8)+(unsigned char)tempDat[i+5];
						tempDtaArr[10][indexTemp] += tempDtaArr[tempDtaArrIndex2][indexTemp];
					}
					tempDtaArrIndex2++;
				}	
			
			}else{
					
				tempDtaArrIndex1=0;
				tempDtaArrIndex2=0;
			}

			CString strTemp,strLogTemp,strLog;
			//��������
			strTemp.Format(_T("%X"),tempDtaArr[10][1]);
			comm1_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][2]);
			comm2_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][3]);
			comm3_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][4]);
			comm4_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][5]);
			comm5_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][6]);
			comm6_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][7]);
			comm7_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][8]);
			comm8_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][9]);
			comm9_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][10]);
			comm10_1.SetWindowTextW(strTemp);

			strTemp.Format(_T("%X"),tempDtaArr[10][11]);
			comm11_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][12]);
			comm12_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][13]);
			comm13_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][14]);
			comm14_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][15]);
			comm15_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][16]);
			comm16_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][17]);
			comm17_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][18]);
			comm18_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][19]);
			comm19_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][20]);
			comm20_1.SetWindowTextW(strTemp);

			strTemp.Format(_T("%X"),tempDtaArr[10][20]);
			comm20_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][21]);
			comm21_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][22]);
			comm22_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][23]);
			comm23_1.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][24]);
			comm24_1.SetWindowTextW(strTemp);
			strLog="";
			for(int i=1;i<=24;i++){
				strLogTemp.Format(_T("%d:%X\n"),i,tempDtaArr[10][i]);
				strLog+=strLogTemp;
			}

			//�ӻ�����
			strTemp.Format(_T("%X"),tempDtaArr[10][201]);
			comm1_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][202]);
			comm2_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][203]);
			comm3_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][204]);
			comm4_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][205]);
			comm5_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][206]);
			comm6_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][207]);
			comm7_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][208]);
			comm8_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][209]);
			comm9_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][210]);
			comm10_2.SetWindowTextW(strTemp);

			strTemp.Format(_T("%X"),tempDtaArr[10][211]);
			comm11_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][212]);
			comm12_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][213]);
			comm13_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][214]);
			comm14_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][215]);
			comm15_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][216]);
			comm16_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][217]);
			comm17_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][218]);
			comm18_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][219]);
			comm19_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][220]);
			comm20_2.SetWindowTextW(strTemp);

			strTemp.Format(_T("%X"),tempDtaArr[10][220]);
			comm20_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][221]);
			comm21_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][222]);
			comm22_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][223]);
			comm23_2.SetWindowTextW(strTemp);
			strTemp.Format(_T("%X"),tempDtaArr[10][224]);
			comm24_2.SetWindowTextW(strTemp);

			for(int i=201;i<=224;i++){
				strLogTemp.Format(_T("%d:%X  "),i,tempDtaArr[10][i]);
				strLog+=strLogTemp;
			}
			if(isWrite){
				logFile_.Write(strLog,1024);
				logFile_.Flush(); //����д�룬������
			}					
		}
		Sleep(1000);	
	}
	
}


UINT CtestDlg::thread1_func(LPVOID lpParam)
{
	//udpC.recvUdpDta();
	CtestDlg  *pMain = (CtestDlg*)lpParam;
	pMain->recvDta();
	return 1;
}




void CtestDlg::OnEnChangeEdit37()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnEnChangeEdit36()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


//��������
void CtestDlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CSetNetDlg *setNet = new CSetNetDlg();
	setNet->DoModal();

}


void CtestDlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strT;
	m_writeLog.GetWindowTextW(strT);
	if(strT == TEXT("��ʼд��")){
		isWrite==1;
		m_writeLog.SetWindowTextW(_T("ֹͣд��"));
	}else{
		isWrite==0;
		m_writeLog.SetWindowTextW(_T("��ʼд��"));
	}
}
