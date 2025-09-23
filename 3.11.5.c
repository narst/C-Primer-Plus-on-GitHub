#include<stdio.h>
int main()
{
	int age,x;//年龄>68 可能溢出，偷懒没有用long long 
    printf("请输入你当前的年龄:");
	scanf("%d",&age);
	x=31560000*age;
	printf("你当前的秒数是%d",x);
	return 0;
}
