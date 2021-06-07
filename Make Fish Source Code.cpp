/*
该版本为U盘坏了以后我担心无法回复，于是重写该代码 
	0.3Lite:
		重构代码,排除了对 color.h的包涵QAQ (但我有备份，她回来了！)
*/
#include <bits/stdc++.h>
#include <windows.h>
//#include <color.h>
using namespace std;
#define WINVER 0x06010000
#define cls system("cls")
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd){
	time_t time;
	char User_Name[16];
	printf("%s\n","欢迎，");
	printf("淼淼\n");
//	blue;
	MessageBeep(MB_ICONWARNING);
	printf("%s","请输入您的用户名：");
	cin >> User_Name;
	system("MD Data");
	system("Data");
	freopen("User_Name.txt",W,stdout);
	for(int i = strlen(User_Name);i >= 0;i--){
		cin >> User_Name[i];
	}
	fclose(stdout);
	cls;
	
	
	
	
	return 0;
} 
