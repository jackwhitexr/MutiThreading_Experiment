/*	Author:Mr.Bubbles
	多线程同步示例程序——事件对象
	Emai:jackwhitexr@sina.com
*/
/*
#include "afxmt.h"
#include <afxwin.h>
#include <cstdio>
#define N 100

using namespace std;
HANDLE g_event; //使用事件对象进行同步
DWORD WINAPI Hello(LPVOID IpParameter){
	WaitForSingleObject(g_event,INFINITE);
	for(int i=0;i<10;i++){	
		printf("Hello\n");
		//Sleep(10);
	}
	SetEvent(g_event);
	return 0;
	

}
//输出World字符串的线程
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
	//创建并启动两个线程
	g_event = CreateEvent(NULL, false, false, NULL); //事件实例
	SetEvent(g_event);
	CreateThread(NULL, 0, Hello, 0, 0, 0);
	CreateThread(NULL, 0, World, 0, 0, 0);
	Sleep(1000);  //防止主线程运行过快
	CloseHandle(Hello);
	CloseHandle(World);
	CloseHandle(g_event);
	
return 0;
}*/