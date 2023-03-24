#include<stdio.h>
int main()
{
	int py, c, math, phy, total, aggregate;
	printf("Enter the Python marks:");
	scanf("%d\n", &py);
	printf("Enter the C programming marks:");
	scanf("%d\n", &c);
	printf("Enter the math marks:");
	scanf("%d\n", &math);
	printf("Enter the Physics marks:");
	scanf("%d\n", &phy);
	total = py + c + math + phy;
	printf("Total marks:%d\n", total);
	aggregate = total/4;
	printf("aggregate:%d\n", aggregate);
    if(aggregate>75)
	{
		printf("DISTINCTION");
	}
	else if(aggregate >=60 && aggregate <75)
	{
		printf("First Division");
	}
	else if(aggregate >=50 && aggregate <60)
	{
		printf("Second Division");
	}
	else if(aggregate >=40 && aggregate <50)
	{
		printf("Third Division");
	}
	else
	{
		printf("Fail");
	}
}
