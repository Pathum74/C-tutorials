//Input a student name, birth year and display student name with age.

#include <stdio.h> 
int main() 
{ 
    char name[50]; 
    int birthYear,currrentYear,age; 
 
     //Input 
    printf("Enter your name :"); 
    scanf("%s",&name); 
    printf("Enter your  birth year :"); 
    scanf("%d",&birthYear); 
 
    //Process 
    age= 2024 -birthYear; 
 
    //Output 
    printf("Student name is : %s\n",&name); 
    printf("Student age is: %d ",age); 
 
    return 0; 
} 
