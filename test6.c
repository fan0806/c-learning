#include<stdio.h>
int main()
	{
	int n = 0;
	int x = 0;
	scanf_s("%d", &x);
	do {
		n++;
		x /= 10;
	} while (x > 0);
		

	
	printf("%d", n);
	return 0;
	}
