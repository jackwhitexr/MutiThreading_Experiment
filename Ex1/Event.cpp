/*	Author:Mr.Bubbles
	���߳�ͬ��ʾ�����򡪡��¼�����
	Emai:jackwhitexr@sina.com
*/
/*
#include "afxmt.h"
#include <afxwin.h>
#include <cstdio>
#define N 100

using namespace std;
HANDLE g_event; //ʹ���¼��������ͬ��
DWORD WINAPI Hello(LPVOID IpParameter){
	WaitForSingleObject(g_event,INFINITE);
	for(int i=0;i<10;i++){	
		printf("Hello\n");
		//Sleep(10);
	}
	SetEvent(g_event);
	return 0;
	

}
//���World�ַ������߳�
DWORD WINAPI World(LPVOID IpParameter){
	WaitForSingleObject(g_event, INFINITE);
	for (int i = 0; i<10; i++){
		printf("World\n");
		//Sleep(10);
	}
	SetEvent(g_event);
	return 0;
}

int main(){
	//���������������߳�
	g_event = CreateEvent(NULL, false, false, NULL); //�¼�ʵ��
	SetEvent(g_event);
	CreateThread(NULL, 0, Hello, 0, 0, 0);
	CreateThread(NULL, 0, World, 0, 0, 0);
	Sleep(1000);  //��ֹ���߳����й���
	CloseHandle(Hello);
	CloseHandle(World);
	CloseHandle(g_event);
	
return 0;
}*/