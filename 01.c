#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNNINGS
#pragma warning(disable: 4996)

int main()
{
	char str1[20] = "123456789";
	char str2[20];
	char str3[5];

	/* case one  */
	strcpy(str2, str1);
	puts(str2);

	/* case two */
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/* case three */
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

	return 0;
}

// strl�� ���� �� ���ڿ��� str2�� �����ϵ� strl�� ���̰� �ſ� ��ٸ� sizeof(str2)�� ��ȯ ���� �ش��ϴ� ������ �� ��ŭ�� ���縦 �����ϴ� ��.