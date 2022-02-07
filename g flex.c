#include<stdio.h>
 void main()
 {
 	int i,j,a,b;
 	printf("enter the height of alphabet \n");
 	scanf("%d",&a);
 	b=a/2;
 	for(i=1;i<=a;i++)
 	{
 		for(j=1;j<=a-1;j++)
 		{
 			if(j==1 || (j<=a-1 && i==1)|| (j<=a-1  && i==a ) || (j==a-1  && i>=b ) || (j>=b  && i==b ))
 			printf("*");
 			else
 			printf(" ");
		 }
		 printf("\n");
	 }
 }
