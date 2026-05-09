#include <stdio.h>

int main()
{
    printf("両替します\n");

    int money;

    while (1)
    {
        printf("金額を入力してください\n");

        if (scanf_s("%d", &money) != 1)
        {
            printf("文字は入力できません\n");

            while (getchar() != '\n');

            continue;
        }

        if (money < 0)
        {
            printf("マイナス値はできません\n");
            continue;
        }

        break;
    }

    int count = 0;
    int remainder = money;

    count += remainder / 500;
    int five_hun = remainder / 500;
    remainder %= 500;

    count += remainder / 100;
    int hun = remainder / 100;
    remainder %= 100;

    count += remainder / 50;
    int fifty = remainder / 50;
    remainder %= 50;

    count += remainder / 10;
    int ten = remainder / 10;
    remainder %= 10;

    count += remainder / 5;
    int five = remainder / 5;
    remainder %= 5;

    count += remainder / 1;
    int one = remainder / 1;
    remainder %= 1;

    printf("回数:%d\n", count);
    printf("500円:%d枚\n100円:%d枚\n50円:%d枚\n10円:%d枚\n5円:%d枚\n1円:%d枚\n",
        five_hun,hun,fifty,ten,five,one);

    return 0;
}