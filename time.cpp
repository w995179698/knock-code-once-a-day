#include<stdio.h>
int main()

{
	int hour;
	int minute;
	int hour1;
	int minute1;

	printf(
		"�����������ڵ�ʱ��ʱ����");
	scanf_s("%d %d", &hour, &minute);
	printf("������Ҫ�����ʱ��ʱ��");
	scanf_s("%d %d", &hour1, &minute1);
	int t1 = hour * 60 + minute;
	int t2 = hour1 * 60 + minute1;
	int t = t2 - t1;
	printf("����ʱ���Ϊ%dʱ%d��",t/60,t%60);
	return 0;
}