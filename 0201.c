/*
Have the computer print

HI, HOW OLD ARE YOU?

on one line. The user then enters his or her age immediately after the question mark. The computer then skips two lines and prints on two consecutive lines.

WELCOME (age)
LET’S BE FRIENDS!

Write a complete C program to do the above.

*/

#include<stdio.h> 
int main() {  
int age;  
printf("HI,HOW OLD ARE YOU?"); 
scanf("%d",&age);  
printf("\n\n");  
printf("WELCOME(%d)\n",age);  
printf("LET'S BE FRIENDS!");  
return 0;  
}