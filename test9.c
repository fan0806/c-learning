#include<stdio.h>
int main()
{
	int a = 0;
	int x = 0;
	int n = 0;
	scanf_s("%d", &a);
	while (a>0)
	{
		n = a % 10;
		x = x *10+ n;
		printf("%d", x);
		a = a / 10;
		
	}
	    
		return 0;
}