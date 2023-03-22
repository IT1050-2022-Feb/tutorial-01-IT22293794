/* Exercise 1 - Calculations

Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() 
{
  float marks1, marks2;
  float avg;
    
  printf("Enter marks 1 : ");
  scanf("%f", &marks1);
    
  printf("Enter marks 2 : ");
  scanf("%f", &marks2);
    
  avg = (marks1 + marks2) / 2.0;
    
  printf("Average : %.2f", avg);
  
return 0;
}

