#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int a,b,c, final=0;
 	 printf("Enter 3 numbers \n");
	 scanf("%d",&a);
	 scanf("%d",&b);
	 scanf("%d",&c);
//	 if(a>=b && a>=c)
//	 {
//	 	printf("%d is greatest ",a);
//	 }
//	  else if(b>=c)
//	 {
//	 	printf("%d is greatest ",b);
//	 }
//	 else
//	 {
//	 	printf("%d is greatest",c);
//	 }


//if(a>=b){
//	if(a>=c){
//	 	printf("%d is greatest ",a);
//	 }else{
//	 		printf("%d is greatest ",c);
//		}
//else{ 
//	if(b>=c){
//	 	printf("%d is greatest ",b);
//	 }else{
//	 	printf("%d is greatest",c);
//	 }
//   }
//}

//a>b?a:b
final = a>=b?a>=c?a:c : b>=c?b:c;

printf("%d", final);
}

