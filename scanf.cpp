#include<stdio.h>
int main()
{
	double foot;
	double inch;
	printf("������������ߵ�Ӣ�ߺ�Ӣ��");
	scanf_s("%lf", &foot);
	scanf_s("%lf", &inch);
	printf("���������%f", (foot+inch/12)*0.3048);
	return 0;
}