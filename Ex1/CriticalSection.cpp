/*	Author:Mr.Bubbles
	多线程同步示例程序——临界区
	Emai:jackwhitexr@sina.com
*/

#include "afxmt.h"
#include <afxwin.h>
#include <cstdio>
#define N 100

using namespace std;
CCriticalSection section; //使用临界区进行线程同步
//输出Hello字符串的线程
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
//输出World字符串的线程
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
	//创建并启动两个线程
	CreateThread(NULL, 0, Hello, 0, 0, 0);
	CreateThread(NULL, 0, World, 0, 0, 0);
	Sleep(1000);  //防止主线程运行过快
	CloseHandle(Hello);
	CloseHandle(World);
	return 0;
}