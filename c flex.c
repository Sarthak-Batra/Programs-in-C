#include<stdio.h>
 void main()
 {
 	int i,j,a,b;
 	printf("enter the height of alphabet \n");
 	scanf("%d",&a);
 	b=(4*a)/5;
 	for(i=1;i<=a;i++)
 	{
 		for(j=1;j<=a;j++)
 		{
 			if(j==1 || (j<=b && i==1)|| (j<=b  && i==a ))
 			printf("*");
 			else
 			printf(" ");
		 }
		 printf("\n");
	 }
 }
