#include<stdio.h>
int main()
{
	int price=0;
	printf("请输入您的金额；");
		scanf("%d", price);
		const int money = 3000;
		int change = money - price;
		printf("应该找您%d元",change );
	return 0;
	
}
