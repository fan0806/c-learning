#include<stdio.h>
int main()
{
	int sum = 0;
	int num = 0;
	int n = 0;
	scanf_s("%d", &num);
	while (num != -1) {
		sum += num;
		n=n+1;
		//确保循环条件发生变化
		scanf_s("%d", &num);
	}
	printf("%f\n", 1.0*sum/n);
	return 0;
}