

#include<stdio.h>
int main()
{
	//初定义
	int hour1, minute1;
	int hour2, minute2;
	//读取数据
	scanf_s("%d %d", &hour1, &minute1);
	scanf_s("%d %d", &hour2, &minute2);
	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	//计算借位
	if (im < 0) {
		im = 60 + im;
		ih = ih - 1;
	}
	//表示结果
	printf("%d,%d\n", ih, im);
	return 0;
}