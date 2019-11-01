//TelephoneInfo.c
#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

struct person
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct person man1, man2;
	strcpy(man1.name, "∞Ì»÷¬˘");
	strcpy(man1.phonenum, "010-3327-0064");
	man1.age = 24;

	printf("Insert the name: "); scanf("%s", man2.name);
	printf("Insert the number: "); scanf("%s", man2.phonenum);
	printf("Insert the age: "); scanf("%d", &(man2.age));

	printf("Name: %s\n", man1.name);
	printf("Number: %s\n", man1.phonenum);
	printf("Age: %d\n", man1.age);

	printf("Name: %s\n", man2.name);
	printf("Number: %s\n", man2.phonenum);
	printf("Age: %d\n", man2.age);


	return 0;
}