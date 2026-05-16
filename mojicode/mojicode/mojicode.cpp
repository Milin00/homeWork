#include<stdio.h>

int main()
{
	char code[27];

	int num = 97;
	for (int i = 0; i < 27; i++)
	{
		code[i] = num;
		num++;
	}
	code[26] = '\0';
	printf("%s", code);
}