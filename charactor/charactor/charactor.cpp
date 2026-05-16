#include<stdio.h>

struct Parametor {
	char name[24];
	int hp;
	int attack;
	int defence;
};

void f(Parametor param)
{
	printf("名前:%s\n", param.name);
	printf("体力:%d\n", param.hp);
	printf("攻撃力:%d\n", param.attack);
	printf("防御力:%d\n", param.defence);
}

int main()
{
	Parametor player = { "player",10,20,30 };
	Parametor enemy = {"enemy", 50, 10, 20};
	f(player);
	printf("\n");
	f(enemy);
}