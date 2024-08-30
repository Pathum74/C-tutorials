/*
Write a complete program to ask user enter three integer numbers, 
and then tell the user the largest value and smallest value among the three numbers.
*/

#include<stdio.h>  
int main() {  
int num1,num2,num3;  
printf("Enter first number : ");  
scanf("%d",&num1);  
printf("Enter second number: ");  
scanf("%d",&num2);  
printf("Enter third number : ");  
scanf("%d",&num3);  
int x = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? 
num2 : num3);  
int y = num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? 
num2 : num3);  
printf("Largest value is : %d\n",x);  
printf("Smallest value is : %d\n",y);  
return 0; 
} 