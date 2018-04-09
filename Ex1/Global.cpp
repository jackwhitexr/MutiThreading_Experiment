/*	Author:Mr.Bubbles
	多线程同步示例程序——使用全局变量
	Emai:jackwhitexr@sina.com
*/
/*
#include "afxmt.h" //萌萌哒头文件^_^
#include <afxwin.h>
#include <cstdio>
#define N 100
const int HELLOTURN = 1; //比头文件还要萌的常量
const int WORLDTURN = 0;
using namespace std;
HANDLE g_event; //使用事件对象进行同步
int global = HELLOTURN;
DWORD WINAPI Hello(LPVOID IpParameter){
	while (true){
		if (global == HELLOTURN){
			for (int i = 0; i < 10; i++){ //在这里我循环打印10次Hello
				printf("Hello\n");		  //接下来是循环打印10次World
			}
			global = WORLDTURN;
			break;
		}
		else
			Sleep(10);
	}
	return 0;
}
//输出World字符串的线程
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
	//创建并启动两个线程
	CreateThread(NULL, 0, Hello, 0, 0, 0); //最萌的两个线程
	CreateThread(NULL, 0, World, 0, 0, 0);
	Sleep(1000);  //防止主线程运行过快
	CloseHandle(Hello);
	CloseHandle(World);
	return 0;
}*/