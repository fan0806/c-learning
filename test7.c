#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	srand(time(0));
	int num = rand() % 100 + 1;
	int count = 0;
	int guess = 0;
	do {
		printf("please guess the number\n");
		scanf_s("%d", &guess);
		count++;
		if (guess > num)
		{
			printf("too big\n");
		}
		if (guess < num)
		{
			printf("too small\n");
		}
	} while (num != guess);
	printf("you guess the true number with %d times\n", count);
	return 0;
}
	
