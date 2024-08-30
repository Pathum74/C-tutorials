/*
	Display employee name, new salary, when the user inputs employee name, and basic salary. You can refer following formula and the table to calculate new salary:
   		New Salary = Basic Salary + Increment
	
   	Basic Salary                              Increment
  	 Less than 5000                         5% of Basic Salary
   	More than or equal 5000
   	and less than 10000                 10% of Basic Salary
   	More than or equal 10,000       15% of Basic Salary

*/

#include<stdio.h> 
int main() { 
float salary,new_salary,increment;  
char name[100];  
printf("Enter Employee name: ");  
scanf("%s",&name);  
printf("Enter your basic salary: ");  
scanf("%f",&salary);  
if (salary > 1 && salary < 5000){  
increment = (salary/100)*5 ;  
}  
else if(salary >= 5000 && salary < 10000){  
increment = (salary/100) * 10;  
}  
else if (salary >= 10000) {  
increment = (salary/100) * 15 ;  
}  
new_salary = salary + increment;  
printf("____________________________________\n");  
printf("Employe name : %s\n",name);  
printf("new salary = LKR %.2f\n",new_salary);  
printf("Basic salary = LKR %.2f\n",salary);  
printf("Increment = LKR %.2f\n",increment);  
return 0;  
}  