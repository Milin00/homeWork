#include<stdio.h>
#include<string.h>

int add(int x,int y)
{
	int answer = x + y;
	printf("足し算の結果:%d\n", answer);
	return answer;
}
int sub(int x, int y)
{
	int answer = x - y;
	printf("引き算の結果:%d\n",answer);
	return answer;
}
int mult(int x, int y)
{
	int answer = x * y;
	printf("掛け算の結果:%d\n", answer);
	return answer;
}
float div(int x, int y)
{
	if (y == 0)
	{
		printf("0で割ることはできません\n");
		return 0;
	}
	else
	{
		float answer =(float)x/(float)y;
		printf("割り算の結果:%f\n", answer);
		return answer;
	}
}

int main()
{
	int a;
	int b;
	char str[100];
	printf("計算をします\n");

	while (1)
	{
		printf("一つ目の数を入力してください\n");
		if (scanf_s("%d", &a) != 1)
		{
			printf("数値を入力してください\n");
			while (getchar() != '\n');
			continue;
		}

		printf("二つ目の数を入力してください\n");
		if (scanf_s("%d", &b) != 1)
		{
			printf("数値を入力してください\n");
			while (getchar() != '\n');
			continue;
		}
		add(a, b);
		sub(a, b);
		mult(a, b);
		div(a, b);
		printf("終了するにはYを押してください\n");
		scanf_s("%s", str, 100);
		if (strcmp(str, "Y") == 0 || strcmp(str, "y") == 0)
		{
			break;
		}
	}
}