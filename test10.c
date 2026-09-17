#include<stdio.h>
int main()
{
	int a = 0;
	int b ;
	int c = 0;
	scanf_s("%d", &a);
	for (b=2;b<a;b++)
	{
		if (a%b==0)
		{
			c = 1;
			break;
		}
		
	}
	if (c==1)
	{
		printf("no\n");
	}
	else
	{
		printf("yes\n");
	}
	return 0;
}