/*
Input 10 numbers and to output number of positive, number of negative, number of zeros.  
*/

 #include <stdio.h> 
 int main() { 
   int number[10]; 
   for(int i = 0; i < 10; i++){ 
       printf("Enter Number[%d]: ",i); 
       scanf("%d",&number[i]); 
   } 
   for(int i = 0; i < 10; i++){ 
       if(number[i] >=1 ){ 
           printf("%d is positive\n",number[i]); 
       } 
       else if(number[i] < 0){ 
           printf("%d is negative\n",number[i]); 
       } 
       else{ 
           printf("Zero"); 
       } 
   } 
    return 0; 
 }