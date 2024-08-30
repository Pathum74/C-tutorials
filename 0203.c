/*
Convert a temperature reading in degrees Fahrenheit to degrees Celsius, using the formula

C = ( 5 / 9 ) x ( F – 32 )

Test the program with the following values: 68, 150, 212, 0, -22, -200 (degree Fahrenheit).

*/

#include<stdio.h> 
int main() {  
int fahrenheit[] = {68, 150, 212, 0, -22, -200};  
for (int i = 0; i < 6; i++) {  
float celsius = (5.0 / 9.0) * (fahrenheit[i] - 32);  
printf("%d°F = %.2f°C\n", fahrenheit[i], celsius);  
}  
return 0;  
} 