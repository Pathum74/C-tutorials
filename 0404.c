/*
Input the Employee no  and the Basic Salary of the  Employees in an organisation ending with the  
dummy value -999  for  Employee no  and count the number Employees whose Basic Salary  >=5000. 
*/

#include <stdio.h> 
 int main() { 
    int employeeNo; 
    float basicSalary; 
    int countAbove5000 = 0; 
    printf("Enter Employee numbers and Basic Salaries (enter -999 to stop):\n"); 
    while (1) { 
        printf("Employee No (or -999 to stop): "); 
        scanf("%d", &employeeNo); 
        if (employeeNo == -999) { 
            break; 
        } 
        printf("Basic Salary: $"); 
        scanf("%f", &basicSalary); 
        if (basicSalary >= 5000) { 
            countAbove5000++; 
        } 
    } 
    printf("\nNumber of Employees with Basic Salary >= 5000: %d\n", 
countAbove5000); 
    return 0; 
 } 
 
 

 
 
