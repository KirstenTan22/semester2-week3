
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Kirsten Tan
 * ID: 201889907
 */

int main( void ) {

   // define and initialise variables for the problem data 
   float salary = 36250;
   float NI_rate = 0.08;
   float tax_rate = 0.15;
   float NI_contribution, remaining_salary, taxable_salary, tax_contribution, 
         take_home_salary = 0;

   // calculate the deductions and final take-home salary

   // Calculate NI contribution
   NI_contribution = salary * NI_rate;
   remaining_salary = salary - NI_contribution;

   // Calculate tax contribution
   if (remaining_salary > 12500) {
      taxable_salary = remaining_salary - 12500;
      tax_contribution = taxable_salary * tax_rate;
   } 

   take_home_salary = remaining_salary - tax_contribution;

   // Use only these print statement with appropriate formatting and variable names
   printf("Salary £%.2f\n", salary);
   printf("NI contribution £%.2f\n", NI_contribution);
   printf("Tax contribution £%.2f\n", tax_contribution);
   printf("Take home salary £%.2f\n", take_home_salary);

   return 0;
}