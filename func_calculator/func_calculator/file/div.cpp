#include<stdio.h>
float div(int x, int y)
{
	if (y == 0)
	{
		printf("0‚ÅŠ„‚é‚±‚Æ‚Í‚Å‚«‚Ü‚¹‚ñ\n");
		return 0;
	}
	else
	{
		float answer = (float)x / (float)y;
		printf("Š„‚èŽZ‚ÌŒ‹‰Ê:%f\n", answer);
		return answer;
	}
}