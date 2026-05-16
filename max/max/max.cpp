#include<stdio.h>

int main()
{
	int num[5] = { 0,0,0,0,0 };
	int max = 0;
	printf("数値を5つ入力してください\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &num[i]);
		if (num[i] > max)
		{
			max = num[i];
		}
	}

	printf("最大値は%dです\n", max);
}