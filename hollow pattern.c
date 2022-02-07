#include<stdio.h>

void main()
 {  
 	int i,j,row,column;
 	printf("enter no. of column stars ");
 	scanf("%d",&column);
 	printf("enter no. of row stars ");
 	scanf("%d",&row);
 	for(i=1;i<=column;i++)
 	{
 		for(j=1;j<=row;j++)
 		{
 			if((i==1 ||j==1)||(i==column || j==row))
 			printf(" * ");
 			else
 			printf("   ");
		}
		 printf("\n");
	 }
 }
