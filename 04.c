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
 int atoi((const char *str)); --> 문자열의 내용을 int형으로 변환
 long atol((const char *str)); --> 문자열의 내용을 long형으로 변환
 double atof((const char *str)); --> 문자열의 내용을 double형으로 변환

 */