
// TradePerformanceTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTradePerformanceTestApp:
// �йش����ʵ�֣������ TradePerformanceTest.cpp
//

class CTradePerformanceTestApp : public CWinApp
{
public:
	CTradePerformanceTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTradePerformanceTestApp theApp;