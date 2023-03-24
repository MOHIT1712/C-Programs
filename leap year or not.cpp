#include<stdio.h>
int main()
{
	int a, previous, next, i;
	printf("enter the year:");
	scanf("%d", &a);
	if (a%4==0)
	{
	printf("It is a leap year\n");
	printf("the next leap year is on%d:", a+4);
	}
	else
	{
		printf("It is not a leap year\n");
		for (i=a; i>=a; i++)
		{
			if(i%4==0)
			{
				next = i;
				printf("the next leap year is on:");
				printf("%d\n", next);
				break;
					
			}
		}		
		for (i=a; i<=a; i--)
		{
			if(i%4==0)
			{
				previous = i;
				printf("the previous leap year is on:");
				printf("%d", previous);
				break;
					
			}
		}	
	}
	return 0;
}
