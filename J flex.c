#include<stdio.h>
void main()
{
	int i,j,a,b;
 	printf("enter the height of alphabet \n");
 	scanf("%d",&a);
 	b=3*a/5;
	for(i=1;i<=a;i++)
	{
		for(j=b ;j<=a;j++)
		{
		if(i==1 || j==a || i==a&&j>=b || j==b&&i>=b+1 )
		printf("*");
		else
		printf(" ");
	    }
	    printf("\n");
	}
	
}
