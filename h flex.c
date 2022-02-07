#include<stdio.h>
 void main()
 {
 	int i,j,a,b;
 	printf("enter the height of alphabet \n");
 	scanf("%d",&a);
 	b=((a/2)+1);
 	for(i=1;i<=a;i++)
 	{
 		for(j=1;j<=a;j++)
 		{
 			if(j==1 || j==a || (j>=2 && j<=a-1 && i==b ))
 			printf("*");
		    else
		    printf(" ");
		 }
		 printf("\n");
		
	 }
 }
