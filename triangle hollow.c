#include<stdio.h>

void main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if( i==4 ||  j==5-i || j==i+3 )
				   {
			        printf("%d ",j);
		           }
		        else
		            printf("  ");
		    
		}
		printf("\n");
	}
}
