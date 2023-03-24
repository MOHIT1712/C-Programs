#include<stdio.h>
int main()
{
	int a, j, multiply, i;
	printf("enter the multiplying no:");
	scanf("%d",&a);
	printf("enter the range:");
	scanf("%d",&j);
	for(i=1; i>=a; i++)
	{
		multiply = a*i;
		printf("%d",a,"*%d", i,"=%d", multiply);
		break;
	}
	return 0;
	
}
