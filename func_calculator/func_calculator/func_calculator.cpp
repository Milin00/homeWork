#include<stdio.h>
#include<string.h>
#include "file/add.h"
#include "file/sub.h"
#include "file/mult.h"
#include "file/div.h"
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