// 445pg ���� 1��
#include <stdio.h>
#pragma warning (disable: 4996)

int ConcCase(int ch)
{
	int diff = 'a' - 'A'; // ��� ������ �� �ҹ��ڰ� ���� ũ��� ����
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
	ch = getchar(); // ���� �Է�
	ch = ConcCase(ch); // ���� ��ȯ
	if (ch == -1)
	{
		puts("It is out ranged insert! ");
		return -1;
	}
	putchar(ch); // ��ȯ�� ���ڸ� ���
	return 0;
}