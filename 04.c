//ConvstringToPrimitive
#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

int main()
{
	char str1[20];
	printf("Insert the number: ");
	scanf("%s", str1);
	printf("%d\n", atoi(str1));

	printf("Insert the number: ");
	scanf("%s", str1);
	printf("%g\n", atof(str1));

	return 0;
}

/*
 int atoi((const char *str)); --> ���ڿ��� ������ int������ ��ȯ
 long atol((const char *str)); --> ���ڿ��� ������ long������ ��ȯ
 double atof((const char *str)); --> ���ڿ��� ������ double������ ��ȯ

 */