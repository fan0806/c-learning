#include<stdio.h>
void change(int, int);
void change(int* a, int* b)//函数及声明需要在main函数前书写
{
	int c = 0;
	int* p = a;
	int* q = b;
	c = *q;
	*q = *p;
	*p = c;
}
int main()
{	
	int a = 5;
	int b = 6;
	change(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}