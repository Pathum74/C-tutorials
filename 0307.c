/*
The gross remuneration of a company salesman comprises the Basic Salary and certain additional allowances and bonuses as given below:
Salesmen with over 5 years’ service receive a 10% additional allowance of Basic Salary each month.
Salesmen working in Colombo ( Input character ‘C’ if the city is Colombo)  receive an additional allowance of  
Rs. 2,500/- per month.
The monthly bonus payment is computed as given below:

Monthly Sales(Rs)	Bonus as a percentage
 of monthly sales

0-25000             10
25000-50000         12
>=50000             15

Write a program to output the gross monthly remuneration of a salesman.

*/

#include<stdio.h>  
int main() {  
const double additionalAllowancePercentage = 0.10;  
const int colomboAllowance = 2500;  
const double bonusRanges[] = {0, 25000, 50000};  
const double bonusPercentages[] = {10, 12, 15};  
double basicSalary, monthlySales, grossRemuneration;  
char city;  
printf("Enter Basic Salary: ");  
scanf("%lf", &basicSalary);  
printf("Enter years of service: ");  
int yearsOfService;  
scanf("%d", &yearsOfService);  
printf("Enter city (C for Colombo, other for elsewhere): ");  
scanf(" %c", &city);  
printf("Enter Monthly Sales (Rs): ");  
scanf("%lf", &monthlySales);  
double additionalAllowance = 0;  
if (yearsOfService > 5) {  
additionalAllowance = additionalAllowancePercentage * basicSalary;  
}  
if (city == 'C') {  
additionalAllowance += colomboAllowance;  
}  
double bonus = 0;  
for (int i = 0; i < sizeof(bonusRanges) / sizeof(bonusRanges[0]); i++)  
{  
if (monthlySales <= bonusRanges[i]) {  
bonus = bonusPercentages[i];  
break;  
}  
}  
grossRemuneration = basicSalary + additionalAllowance + (bonus / 100) * 
monthlySales;  
printf("\nGross Monthly Remuneration: Rs. %.2f\n", grossRemuneration);  
return 0;  
}