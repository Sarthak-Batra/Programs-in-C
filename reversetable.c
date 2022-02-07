#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num,ans;
	printf("Enter a number to get it's table \n");
	scanf("%d",&num);
	for(i=10;i>=1;i--)
	{
		printf("%d * %d = %d \n",num,i,ans=i*num);
	}
}
