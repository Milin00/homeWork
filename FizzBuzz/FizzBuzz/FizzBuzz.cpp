#include<stdio.h>

int main()
{
	int min;
	int max;
	while (true)
	{

		printf("最小値を入力してください\n");
		if (scanf_s("%d", &min) != 1)
		{
			printf("文字は入力できません\n");
			while (getchar() != '\n');
			continue;
		}

		printf("最大値を入力してください\n");
		if (scanf_s("%d", &max) != 1)
		{
			printf("文字は入力できません\n");
			while (getchar() != '\n');
			continue;
		}
		else
		{
			break;
		}
	}

	if (min >= max)
	{
		printf("最小値のほうが大きいです\n");
	}

	while(min<=max)
	{

		if (min < 1)
		{
			printf("最小値は1以上にしてください\n");
			break;
		}
		if (max > 1000)
		{
			printf("最大値は1000以下にしてください\n");
			break;
		}


		if (max%15==0)
		{
			printf("Fizz Buzz\n");
		}
		else if (max % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if (max % 3 == 0)
		{
			printf("Fizz\n");
		}
		else
		{
			printf("%d\n", max);
		}
		max--;
	}
}