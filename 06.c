// 445pg 문제 1번
#include <stdio.h>
#include <string.h>
#pragma warning (disable: 4996)

int ConvToInt(char c)
{
	static int diff = 1 - '1'; // 모든 숫자 n과 문자 'n'의 차이는 동일하다
	return c + diff;
}

int main()
{
	char str[50];
	int len, i;
	int sum = 0;

	printf("Insert the letter: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ('1' <= str[i] && str[i] <= '9')
			sum += ConvToInt(str[i]);
	}
	printf("The result of the number is %d\n", sum);
	return 0;
}