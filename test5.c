#include<stdio.h>
int main()
{
	int type = 0;
	scanf_s("%d", &type);
	switch (type) {
	case 1:
		printf("Good morning\n");
		break;
	case 2:
		printf("Good afternoon\n");
		break;
	case 3:
		printf("Good night\n");
		break;
	case 4:
		printf("Bye bye\n");
		break;
	default :
		printf("hyw\n");
		break;
	}
	return 0;
}