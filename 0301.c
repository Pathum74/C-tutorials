//Write a program to input two numbers and display the highest number.

#include<stdio.h> 
int main() {  
int n1,n2;  
printf("Enter two numbers: ");  
scanf("%d %d",&n1,&n2);  
if (n1 == n2) 
{ printf("Both number are equal.");  
return 1;  
}  
int x = (n1 > n2 ? n1 : n2);  
printf("Hight: %d",x);  
return 0;  
} 