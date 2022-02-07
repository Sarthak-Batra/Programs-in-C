#include<stdio.h>

void main()
{
	int i,j,a,b,c;
 	printf("enter height of alphabet \n");
 	scanf("%d",&a);
 	b=(a/2)+1;
 	c=(a*4)/5;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(j==1 || i==1 && j<=c || i==b && j<=c  || j==c && i<=b || i>=b && j==i-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
