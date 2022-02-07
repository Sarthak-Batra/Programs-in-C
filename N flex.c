#include<stdio.h>
 void main()
 {
 	int i,j,a,b;
 	printf("enter height of alphabet \n");
 	scanf("%d",&a);
 	b=(a/2);
 	for(i=1;i<=a;i++)
 	{
 		for(j=1;j<=a;j++)
 		{
 			if(j==1 || j==i || j==a )
 			printf("*");
		    else
		    printf(" ");
		 }
		 printf("\n");
		
	 }
 }
