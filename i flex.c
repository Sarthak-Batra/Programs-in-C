#include<stdio.h>
 void main()
 {
 	int i,j,a,b;
 	printf("enter the height of alphabet \n");
 	scanf("%d",&a);
 	b=a/2+1;
 	for(i=1;i<=a;i++)
 	{
 		for(j=1;j<=a;j++)
 		{
 			if(i==1 || i==a || (i>=2 && i<=a-1 && j==b ))
 			printf("*");
		    else
		    printf(" ");
		 }
		 printf("\n");
		
	 }
 }
