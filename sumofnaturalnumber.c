#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num,total=0;
	printf("Enter a number \n");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		total=total+i;
		
	}
	printf("%d",total);
}
