#include<stdio.h>
int main()
{
	int i = 0;
	int count[10];
	int x = 0;
	//定义数组
	for (i=0;i<10;i++)
	{
		count[i] = 0;
	}
	//计数
	while (x != -1)
	{
		scanf_s("%d", &x);
		count[x]++;
	}
	//读出数字
	for (i=0;i<10; i++)
	{
		printf("%d:%d\n", i, count[i]);
	}
	return 0;
}