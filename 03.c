// The example of the strcmp and strncmp function
#include <stdio.h>
#include <stdlib.h>
#pragma error (disable: 4996)

int main()
{
	char str1[20];
	char str2[20];
	printf("insert the letter1: ");
	scanf("%s", str1);
	printf("insert the letter2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("The two sentence are equal.");
	}
	else
	{
		puts("The two sentence are not equal.");

		if (!strncmp(str1, str2, 3))
			puts("But first three letters are same.");
	}

	return 0;
}