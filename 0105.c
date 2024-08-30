//Input two numbers with decimals and display the average with decimals

#include <stdio.h> 
int main() 
{ 
float num1,num2,average; 
 
    //Input 
    printf("Enter your first number :"); 
    scanf("%f",&num1); 
    printf("Enter your second number :"); 
    scanf("%f",&num2); 
 
    //Process 
    average=(num1+num2)/2.00; 
 
    //Output 
    printf("Total is:%.2f",average); 
 
    return 0; 
} 