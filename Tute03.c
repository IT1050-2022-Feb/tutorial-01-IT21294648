/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
	//variables
	int amount, sum=0, count=1;
	
	printf("Enter the amount of numbers of which you want the sume of: ");//getting the user input on the number
	scanf("%d", &amount);
	
	for (count=1; count<=amount; count++)
	{
		sum=sum+count;//obtaining the sum of the give value
	}
	
	printf("The sum of values from 1 to %d is %d", amount, sum);//displaying the answer
    
  return 0;
}

