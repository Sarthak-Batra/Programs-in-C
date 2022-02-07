#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=18;j++)
		{
			if( j==i || j==16-i || j==6-i+4 &&i>1 || j==6+i&&i>1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
