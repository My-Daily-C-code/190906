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
	strncat(str3, str4, 7); // str4의 문자열 중 최대 7개를 str3에 붙이라는 의미.
	puts(str3);

	return 0;
}

// strncat(str3, str4, 7);의 경우 7개의 문자열을 str4에서 str3으로 붙이라는 의미이지만 이 7개의 문자에는 NULL문자가 포함이 되어 있지 않다. 
// 그러므로 NULL문자를 포함한 총 8개의 문자열이 str4에서 str3으로 붙여지게 된다. 
// strncpy함수와는 달리 strncat함수는 문자열의 끝에 NULL문자를 자동적으로 삽입해 준다. 위의 예제는 이 문장에 대한 예시이다. 