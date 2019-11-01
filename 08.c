// 445pg 문제 2번
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
	return -1; // 공백 문자가 존재하지 않는 경우에만 반환
}

int CompName(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2) // 이름의 길이가 다르면 서로 다른 이름!
		return 0;
	else
		return !strncmp(str1, str2, idx1);
}

int CompAge(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int ag1, ag2;

	ag1 = atoi(&str1[idx1 + 1]); // str1[idx1+1]이 나이가 저장 된 위치
	ag2 = atoi(&str2[idx2 + 1]); // str2{idx2+2]이 나이가 저장 된 위치

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