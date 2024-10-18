#include<stdio.h>
int main()

{
	int hour;
	int minute;
	int hour1;
	int minute1;

	printf(
		"请输入您现在的时间时，分");
	scanf_s("%d %d", &hour, &minute);
	printf("请输入要计算的时间时分");
	scanf_s("%d %d", &hour1, &minute1);
	int t1 = hour * 60 + minute;
	int t2 = hour1 * 60 + minute1;
	int t = t2 - t1;
	printf("您的时间差为%d时%d分",t/60,t%60);
	return 0;
}