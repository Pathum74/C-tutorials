//Input two numbers, swap the values and display the output. ( Before swap and after swap)

#include <stdio.h> 
int main() 
{ 
    int num1,num2,temp; 
 
    printf("Enter your first number :"); 
    scanf("%d",&num1); 
    printf("Enter your second number :"); 
    scanf("%d",&num2); 
 
    printf("Before swap :first number = %d,second number = %d\n",num1,num2); 
 
    temp=num1; 
    num1=num2; 
    num2=temp; 
 
    printf("After swap: first number = %d,second number = %d",num1,num2); 
    return 0; 
}