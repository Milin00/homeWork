#include<stdio.h>

struct student {
	char name[24];
	int japanese;
	int english;
	int math;
	int science;
	int society;
	int total = japanese + english + math + science + society;
	float avarage = float(total) / 5;

};

void totaling(student names)
{
	printf("\n名前:%s\n", names.name);
	printf("国語:%d点\n", names.japanese);
	printf("英語:%d点\n", names.english);
	printf("数学:%d点\n", names.math);
	printf("理科:%d点\n", names.science);
	printf("社会:%d点\n", names.society);
	printf("合計点:%d点\n", names.total);
	printf("平均点:%.1f点\n", names.avarage);
}
int main()
{
	student taro = { "taro",100,30,50,73,60 };
	student nanako = { "nanako",20,60,12,40,57 };
	student hana = { "hana",50,40,18,49,29 };
	student tatuki = { "tatuki",80,60,59,93,65 };
	student keigo = { "kiego",90,100,64,90,63 };

	student students[5] = { taro,nanako,hana,tatuki,keigo };
	int max = 0;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		totaling(students[i]);
		if (max < students[i].total)
		{
			max = students[i].total;
		}
		sum += students[i].total;
	}
	float ave = float(sum) / 5;
	printf("\n学年平均点:%.1f点\n", ave);


	for (int j = 0; j < 5; j++)
	{
		if (max == students[j].total)
		{
			printf("最高点数は%sさんで%d点です。\n",students[j].name, max);
		}
	}


	return 0;
}