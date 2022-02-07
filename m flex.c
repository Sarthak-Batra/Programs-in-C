#include<stdio.h>
void main()
{
	int i,j,a,b;
 	printf("enter the height of alphabet \n");
 	scanf("%d",&a);
 	b=(9*a)/5;
	for(i=1;i<=a;i++)              //not ready
	{
		for(j=1;j<=b+10;j++)
		{
			if( j==1 || j==b || j==i || j==b-i+1 )
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
