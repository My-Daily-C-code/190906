//case StringConcatcase.c
#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	char str1[20] = " First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num";
	char str4[20] = "123456789";

	/* Case One */
	strcat(str1, str2);
	puts(str1);

	/* Case Two */
	strncat(str3, str4, 7); // str4�� ���ڿ� �� �ִ� 7���� str3�� ���̶�� �ǹ�.
	puts(str3);

	return 0;
}

// strncat(str3, str4, 7);�� ��� 7���� ���ڿ��� str4���� str3���� ���̶�� �ǹ������� �� 7���� ���ڿ��� NULL���ڰ� ������ �Ǿ� ���� �ʴ�. 
// �׷��Ƿ� NULL���ڸ� ������ �� 8���� ���ڿ��� str4���� str3���� �ٿ����� �ȴ�. 
// strncpy�Լ��ʹ� �޸� strncat�Լ��� ���ڿ��� ���� NULL���ڸ� �ڵ������� ������ �ش�. ���� ������ �� ���忡 ���� �����̴�. 