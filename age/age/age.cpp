#include<stdio.h>

void  func_age(int age1,int age2,int age3,int age4)
{
	int ages[4] = { age1,age2,age3,age4 };
	for (int i = 0; i < 4; i++)
	{
		printf("年齢は%dです\n", ages[i]);
	}
}
int main()
{
	func_age(15, 32, 11, 48);

	return 0;
}