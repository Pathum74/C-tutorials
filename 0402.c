/*
Input Marks of 10 students and output the maximum , minimum and average Marks.
*/

#include <stdio.h> 
 int main() { 
   int number[10]; 
   float total = 0, avg; 
   for(int i = 0; i < 10; i++){ 
       printf("Enter Number[%d]: ",i); 
       scanf("%d",&number[i]); 
       total += number[i]; 
   } 
  int min = number[0]; 
  int max = number[0]; 
  for (int i = 0; i < 10; i++){ 
      if(min > number[i]){ 
          min = number[i]; 
      } 
      if(max < number[i]){ 
          max = number[i]; 
      } 
  } 
  avg = total/10; 
  printf("Average is: %.2f\n",avg); 
  printf("Maximum value is : %d\n",max); 
  printf("Minimum value is : %d\n",min); 
    return 0; 
 } 