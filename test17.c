#include<stdio.h>
#include<string.h>
int main()
{
	char word[] = "hello";
	printf("strlen=%lu", strlen(word));
	printf("size=%lu", sizeof(word));
	return 0;
}