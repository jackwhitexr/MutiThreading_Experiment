/*	Author:Mr.Bubbles
	���߳�ͬ��ʾ�����򡪡��ٽ���
	Emai:jackwhitexr@sina.com
*/

#include "afxmt.h"
#include <afxwin.h>
#include <cstdio>
#define N 100

using namespace std;
CCriticalSection section; //ʹ���ٽ��������߳�ͬ��
//���Hello�ַ������߳�
DWORD WINAPI Hello(LPVOID IpParameter){
	CSingleLock singlelock(&section);
	singlelock.Lock();
	for(int i=0;i<10;i++){
		printf("Hello\n");
		Sleep(10);
	}
	singlelock.Unlock();
	return 0;
	
}
//���World�ַ������߳�
DWORD WINAPI World(LPVOID IpParameter){
	CSingleLock singlelock(&section);
	singlelock.Lock();
	for (int i = 0; i<10; i++){
		printf("World\n");
		Sleep(10);
	}
	singlelock.Unlock();
	return 0;
	
}

int main(){
	//���������������߳�
	CreateThread(NULL, 0, Hello, 0, 0, 0);
	CreateThread(NULL, 0, World, 0, 0, 0);
	Sleep(1000);  //��ֹ���߳����й���
	CloseHandle(Hello);
	CloseHandle(World);
	return 0;
}