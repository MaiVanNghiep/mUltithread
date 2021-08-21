#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
WINAPI Submain(LPVOID lpThreadParameter)
{
	while (1)
	{
		printf("[Task 2] Xin chao\r\n");
		Sleep(2000);
	}
}
void main()
{
	CreateThread(NULL, 128, Submain, NULL, 0, NULL);
	int count = 1000;
	while (1)
	{
		printf("[Task 1] Say hello\r\n");
		Sleep(count);
		count = 2000;
	}
}