// 12 jan 2026

/* Task 29: Employee Salary Evaluation System
 Write a C program that accepts employee details and evaluates their salary status using data types and operators only.
 Input: Employee ID (int)
           Basic Salary (float)
         Years of Experience (int)
          Performance Rating (char) 'A' = Excellent, 'B' = Good, 'C' = Average
 Processing Rules:
 1) Calculate Bonus:
      If experience ≥ 5 AND rating is 'A' → bonus = 20%
      If experience ≥ 3 AND rating is 'B' → bonus = 10%
      Else → bonus = 5%
 2) Calculate Net Salary:
      netSalary = basicSalary + bonus
 3) Determine Salary Status:  Net Salary ≥ 50,000 → "High Salary"
     Else → "Normal Salary" 
 Constraints:  Use only arithmetic (+ - * /) and logical operators (&& || !)
                      Do not use switch-case
                      Use appropriate data types 
                      Use if-else only */

#include<stdio.h>

int main()
{
    int employeeID , yearOfExperience;
    float basicSalary , bonus, netSalary = 0 ;
    char performanceRating ;

    printf("\n Enter Employee ID: ");
    scanf("%d",&employeeID);
    
    printf("\n Enter Basic Salary: ");
    scanf("%f",&basicSalary);
    
    printf("\n Enter Years of Experience: ");
    scanf("%d",&yearOfExperience);

    //printf("\n 'A' = Excellent, 'B' = Good, 'C' = Average ");
    
    printf("\n\n Give the Performance rating: ");
    scanf("%s",&performanceRating);

    printf("\n Employee ID: %d",employeeID);
    printf("\n Years of Experience: %d",yearOfExperience);
    printf("\n Basic Salary: %.2f",basicSalary);

    if ( yearOfExperience >= 5 && performanceRating == 'A' ) {
        bonus = ((20 * basicSalary) / 100) ;
        printf("\n Employee Bonus: %.2f",bonus);
        netSalary = basicSalary + bonus;
    }
    else if ( yearOfExperience >= 3 && performanceRating == 'B' ) {
        bonus = ((10 * basicSalary) / 100) ;
        printf("\n Employee Bonus: %.2f",bonus);
        netSalary = basicSalary + bonus;
    }
    else {
        bonus = ((5 * basicSalary) / 100) ;
        printf("\n Employee Bonus: %.2f",bonus);
        netSalary = basicSalary + bonus;
    }

    printf("\n Employee Netsalary: %.2f",netSalary);
    
    if ( netSalary >= 50000 ) {
        printf("\n Salary Status: High Salary \n");
    }
    else {
        printf("\n Salary Status: Normal Salary \n");
    }

    return 0;
}
