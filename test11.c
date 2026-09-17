# include<stdio.h>
int main()
{
	
	int yuan = 0;
	int one = 1;
	int two = 1;
	int five = 1;
	scanf_s("%d", &yuan);
	for (one = 1;one < yuan * 10;one++)
	{
		for (two=1; two<yuan*5; two++)
		{
			for (five = 1;five < yuan * 2;five++)
			{
				if (one*1+two*2+five*5==yuan*10)
				{
					printf("%d,%d,%d\n", one, two, five);
					goto out;


				}
		 }
		}
	}
	out:
	return 0;
}