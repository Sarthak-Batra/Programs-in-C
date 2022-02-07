#include<stdio.h>

void main()
{
	int i,j,n,b;
	scanf("%d",&n);
	b=n/2;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=b+2-i && j<=b-2+i && j>=i-b && j<3*n/2-i)  
			printf("*");
		    else
		    printf(" ");
		}
		printf("\n");
		
	}
	
	
}
