/*	Author:Mr.Bubbles
	���߳�ͬ��ʾ�����򡪡�ʹ��ȫ�ֱ���
	Emai:jackwhitexr@sina.com
*/
/*
#include "afxmt.h" //������ͷ�ļ�^_^
#include <afxwin.h>
#include <cstdio>
#define N 100
const int HELLOTURN = 1; //��ͷ�ļ���Ҫ�ȵĳ���
const int WORLDTURN = 0;
using namespace std;
HANDLE g_event; //ʹ���¼��������ͬ��
int global = HELLOTURN;
DWORD WINAPI Hello(LPVOID IpParameter){
	while (true){
		if (global == HELLOTURN){
			for (int i = 0; i < 10; i++){ //��������ѭ����ӡ10��Hello
				printf("Hello\n");		  //��������ѭ����ӡ10��World
			}
			global = WORLDTURN;
			break;
		}
		else
			Sleep(10);
	}
	return 0;
}
//���World�ַ������߳�
DWORD WINAPI World(LPVOID IpParameter){
	while (true){
		if (global == WORLDTURN){
			for (int i = 0; i < 10; i++){
				printf("World\n");
			}
			global = HELLOTURN;
			break;
		}
		else
			Sleep(10);
	}

	return 0;
}

int main(){
	//���������������߳�
	CreateThread(NULL, 0, Hello, 0, 0, 0); //���ȵ������߳�
	CreateThread(NULL, 0, World, 0, 0, 0);
	Sleep(1000);  //��ֹ���߳����й���
	CloseHandle(Hello);
	CloseHandle(World);
	return 0;
}*/