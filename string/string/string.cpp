#include<stdio.h>

int main()
{
	char hello[10];
	hello[0] = 'H';
	hello[1] = 'e';
	hello[2] = 'l';
	hello[3] = 'l';
	hello[4] = 'o';
	hello[5] = '\0';
	printf("%s", hello);
}