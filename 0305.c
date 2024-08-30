/*
Write a program that reads in two integers and determines and prints if the first
is a multiple of the second.
*/

#include<stdio.h>  
int main() {  
int num1, num2;  
printf("Enter your first integer: ");  
scanf("%d", &num1);  
printf("Enter your second integer: ");  
scanf("%d", &num2);  
if (num2 != 0 && num1 % num2 == 0)  
{  
printf("%d is a multiple of %d\n", num1, num2);  
}  
else  
{ printf("%d is not a multiple of %d\n", num1, num2); 
}  
return 0;  
} 