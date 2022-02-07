#include<stdio.h>
void main()
{
	int i,j,a,b,c;
 	printf("enter height of alphabet \n");
 	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if( i==a &&j>1&&j<a || j==1 && i<=a-1 || j==a && i<=a-1  )
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
