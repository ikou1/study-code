#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int mystrlen(char* str)
{
	int len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return len;
}
int mystrlen(char* str)
{
	int len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return len;
}
int main()
{
	char arr1[20];
	scanf("%s", arr1);
	reserve1(arr1);
	return 0;
}