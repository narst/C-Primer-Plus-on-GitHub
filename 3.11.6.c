#include<stdio.h>
int main()
{
	double a,b;//a为水分子数量，b为水的夸脱数 
	printf("请输入水的夸脱数:");
	scanf("%lf",&b);
	a=b*950/3e-23;
	printf("%e\n",a);
	return 0;
}
