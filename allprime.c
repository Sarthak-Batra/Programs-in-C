#include<stdio.h>
 void main()
 {
 	int i,j,flag;
 	for(j=2;j<=100;j++)
	 {
 		flag=0;
 	    
 		for(i=2;i<=j/2;i++)
		 {
		 		if(j%i==0){
		 				flag=1;
		 				break;
				 }
		 	
		 }
 	if(flag==0)
 		printf("%d ",j);
	 }
}
