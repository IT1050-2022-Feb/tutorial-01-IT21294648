/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() //start of main
{

	//Variables
	int m1, m2;
	float avg;
	
	printf("Enter marks of 1st subject: ");//1st subject marks
	scanf("%d", &m1);
	
	printf("Enter marks of 2nd subject: ");//2nd subject marks
	scanf("%d", &m2);
	
	avg=(m1+m2)/2.0;
	
	printf("The average is %.2f ", avg);
  return 0;
}

