#include<stdio.h>
int main()
{
	double a=0.0 ;
	int n ;
	int b = 1;
	scanf_s("%d", &n);
	for ( b=1;b<=n ; b++)
	{
		a = a + 1.0 / b;
	}
	printf("%f",a );
	return 0;
}