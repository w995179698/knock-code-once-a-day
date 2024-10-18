#include<stdio.h>
int main()
{
	double foot;
	double inch;
	printf("请输入您的身高的英尺和英寸");
	scanf_s("%lf", &foot);
	scanf_s("%lf", &inch);
	printf("您的身高是%f", (foot+inch/12)*0.3048);
	return 0;
}