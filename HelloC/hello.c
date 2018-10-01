#include <stdio.h>

//diable issues with scan f
//_crt_secure_no_warnings

#pragma warning(disable:4996)

int main()
{
	char str1[20], str2[30];
	int ch;

	printf("\nEnter name: ");
	scanf("%s", str1);

	printf("\nEnter your website name: ");
	scanf("%s", str2);

	printf("\nEntered Name: %s\n", str1);
	printf("\nEntered Website:%s", str2);

	//flush input buffer, this is common for use of getchar...
	while ((ch = getchar()) != '\n');

	printf("\n\nPress Enter to Exit Program");
	getchar();

	return 0;
}