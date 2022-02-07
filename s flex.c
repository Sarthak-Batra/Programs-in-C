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
			if(i==1 && j<=c || i==b && j<=c ||i==a && j<=c || j==1&& i<=b || j==c && i>=b)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
