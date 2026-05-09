#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int lang = rand()%101;
	int math = rand() % 101;
	int science = rand() % 101;
	int society = rand() % 101;
	int english = rand() % 101;
	float avarage = float(lang + math + science + society + english) / 5;
	if (avarage >= 60 && lang >= 40 && math >= 40 && science >= 40 && society >= 40 && english >= 40)
	{
		printf("合格\n");
		printf("点数\n国語:%d\n数学:%d\n社会:%d\n理科:%d\n英語:%d\n", lang, math, science, society, english);
		printf("平均点:%.1f", avarage);
	}
	else
	{
		printf("不合格\n");
		if (lang < 40)
		{
			printf("国語の点数:%d\n", lang);
		}
		if (math < 40)
		{
			printf("数学の点数:%d\n", math);
		}
		if (science < 40)
		{
			printf("理科の点数:%d\n", science);
		}
		if (society < 40)
		{
			printf("社会の点数:%d\n", society);
		}
		if (english < 40)
		{
			printf("英語の点数:%d\n", english);
		}
		printf("平均点:%.1f\n", avarage);
	}
}