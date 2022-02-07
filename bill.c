#include<stdio.h>
 
 void main()
 {
 	int bill,totalbill,surcharge,units;
 	printf("enter no. of units \n");
 	scanf("%d",&units);
     if(units<=50)
     {
     	bill=units*0.5;
	 }
	 	
	 else if(units<=150)
     {
     	bill=25 +(units-50)*0.75;
	 }
	 else if(units<=250)
     {
     	bill=100 +(units-150)*1.2;
	 }
	 else //(unit>250)
     {
     	bill=220 +(units-250)*1.5;
	 }

	surcharge=bill*0.2;
	totalbill=bill+surcharge;
	printf("%d",totalbill);
 }
