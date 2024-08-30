/*
Diameter, Circumference and Area of a Circle) Write a program that reads in the radius
of a circle and prints the circle’s diameter, circumference and area. Use the constant 
value 3.14159 for π. Perform each of these calculations inside the printf statement(s) 
and use the conversion specifier %f.
*/

#include<stdio.h>  
int main() {  
const double pi = 3.14159;  
double radius;  
printf("Enter the radius of the circle: ");  
scanf("%lf", &radius);  
printf("Diameter: %.2f\n", 2 * radius);  
printf("Circumference: %.2f\n", 2 * pi * radius);  
printf("Area: %.2f\n", pi * radius * radius);  
return 0;  
} 