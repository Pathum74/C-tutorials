/*
Input values for int,float,double and char data types and display the value of each of the variable.
*/

#include <stdio.h> 
int main() 
{ 
int int1; 
float float1; 
double double1; 
char char1; 
//Input 
printf("Enter your integer value:"); 
scanf("%d",&int1); 
printf("Enter your  float value:"); 
scanf("%f",&float1); 
printf("Enter your double value:"); 
scanf("%if",&double1); 
while (getchar() !='\n'); 
printf("Enter your character value:"); 
scanf("%c",&char1); 
//Display 
printf("Integer value is : %d\n",int1); 
printf("Float value is : %f\n",float1); 
printf("Double value is : %if\n",double1); 
printf("Character value is : %c\n",char1); 
return 0; 
} 