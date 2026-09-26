#include<stdio.h>
int main()
{
	int a = 6;
	int *p = &a;//取a的地址，给p
	printf("%d",*p );//*p意为访问a的地址
	return 0;
}