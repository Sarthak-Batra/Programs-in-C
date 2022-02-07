#include<stdio.h>
void main()
{
	int i,j,a,b,c,d,e;
 	printf("enter the height of alphabet \n");
 	scanf("%d",&a);
 	b=(a/2);
	for(i=1;i<=a;i++)                //not ready
	{
		for(j=1;j<=a;j++)
		{
			if(j==1 || i<=b && j==a-i+(a-5)|| i>=b && j==i-1+(a-5))
			printf("%d",j);
			else
			printf(" ");
		}
		printf("\n");
	}
}
