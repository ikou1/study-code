#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>                  //�ַ�����ת2
#include"mystrlen.h"
void reverse2(char* str)
{
	char tmp;
	tmp = *str;
	int len = mystrlen(str);
	if (len >= 2)
	{
		*str = *(str + len - 1);
		*(str + len - 1) = '\0';
		reverse2(str + 1);
		*(str + len - 1) = tmp;
	}
}
