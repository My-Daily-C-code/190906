// 445pg ���� 2��
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int GetSpaceIdx(char str[])
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			return i;
	}
	return -1; // ���� ���ڰ� �������� �ʴ� ��쿡�� ��ȯ
}

int CompName(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2) // �̸��� ���̰� �ٸ��� ���� �ٸ� �̸�!
		return 0;
	else
		return !strncmp(str1, str2, idx1);
}

int CompAge(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int ag1, ag2;

	ag1 = atoi(&str1[idx1 + 1]); // str1[idx1+1]�� ���̰� ���� �� ��ġ
	ag2 = atoi(&str2[idx2 + 1]); // str2{idx2+2]�� ���̰� ���� �� ��ġ

	if (ag1 == ag2)
		return 1;
	else
		return 0;
}

int main()
{
	char str1[20];
	char str2[20];

	printf("Insert the First Persons informantion: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	
	printf("Insert the Second Persons information: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1];

	if (CompName(str1, str2))
		puts("The name ate same!");
	else
		puts("The name are not same!");
	if (CompAge(str1, str2))
		puts("The age are same!");
	else
		puts("The age are not same!");
	return 0;
}