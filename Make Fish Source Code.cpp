/*
�ð汾ΪU�̻����Ժ��ҵ����޷��ظ���������д�ô��� 
	0.3Lite:
		�ع�����,�ų��˶� color.h�İ���QAQ (�����б��ݣ��������ˣ�)
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
	printf("%s\n","��ӭ��");
	printf("��\n");
//	blue;
	MessageBeep(MB_ICONWARNING);
	printf("%s","�����������û�����");
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
