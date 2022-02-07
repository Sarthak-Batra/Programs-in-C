#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int amount,disc20,disc15,disc10,disc5;
 	printf("enter total amount");
 	scanf("%d",&amount);
 	if (amount>=5000)
 	{ 
	 printf("your total amount after discount = %d",disc20=amount-(0.2*amount));
   }
	 else if(amount>=4000)
 	{ 
	 printf("your total amount after discount = %d",disc15=amount-(0.15*amount));
 	 }
 	 else if(amount>=3000)
 	{ 
	 printf("your total amount after discount = %d",disc10=amount-(0.10*amount));
 	 }
 	 else if(amount>=2500)
 	{ 
	 printf("your total amount after discount = %d",disc15=amount-(0.05*amount));
}
	  else
	  printf("no discount");
}

