#include<stdio.h>
#include<string.h>
int change();
int change(char word[])
{
	int cnt = 0;
	int i = 0;
	while (word[i] != 0)
	{
		cnt++;
		i++;
	}
	return cnt;
}
int main()
{
	char word[] = "hello";
	printf("change=%d", change(word));
	printf("size=%lu", sizeof(word));
	return 0;
}