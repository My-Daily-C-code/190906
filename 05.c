// 445pg 문제 1번
#include <stdio.h>
#pragma warning (disable: 4996)

int ConcCase(int ch)
{
	int diff = 'a' - 'A'; // 모든 문자의 대 소문자간 차의 크기는 같다
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main()
{
	int ch;
	printf("Insert the letter: ");
	ch = getchar(); // 문자 입력
	ch = ConcCase(ch); // 문자 변환
	if (ch == -1)
	{
		puts("It is out ranged insert! ");
		return -1;
	}
	putchar(ch); // 변환된 문자를 출력
	return 0;
}