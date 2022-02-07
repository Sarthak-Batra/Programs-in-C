#include<stdio.h>
int main()
{
	int i,j,a,b;
	printf("enter height of alphabet \n");
 	scanf("%d",&a);
 	b=a-1;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b*b;j++)
		{
			if(j==i || j==2*b-i+2)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
