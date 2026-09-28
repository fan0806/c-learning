#include<stdio.h>
int main()
{
	int num[] = { 0,1,2,3,4,5,6,7,8,9,-1 };
	int* p = num;
	for (*p = num;*p != -1;p++)
	{
		printf("%d\n", *p);
	}
	printf("%d\n", p);
	return 0;
}