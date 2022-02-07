#include<stdio.h>
 void main()
 {
 	int i,j,a,b;
 	printf("enter height of alphabet \n");
 	scanf("%d",&a);
 	b=(a/2);
 	for(i=1;i<=a;i++)
 	{
 		for(j=1;j<=2*a;j++)
 		{
 			if(j==a-1+i || j==a+1-i || (j>=b+1 && j<=a+b-1 && i==b+1 ))
 			printf("*");
		    else
		    printf(" ");
		 }
		 printf("\n");
		
	 }
 }
