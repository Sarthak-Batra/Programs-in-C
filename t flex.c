#include<stdio.h>
void main()
{
	int i,j,a;
	printf("enter height of alphabet \n");
 	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(j==(a/2)+1 || i==1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
