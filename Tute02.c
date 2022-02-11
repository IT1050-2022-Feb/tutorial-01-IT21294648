/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

//function declaration
float calPrice(float distance);

int main() //start of main

{
  //Variables
	float price,distance;
	
	printf("Enter the distanced travelled in kilometers: ");//getting the distance 
	scanf("%f", &distance);
	
	printf("The total amount to be payed is Rs%.2f", calPrice(distance));//running the distance through the function
	
  return 0;
}
//function definitions
float calPrice(float distance)
{
	//functions
	float price;
	
	if (distance>=0 && distance<30)//when distance between 0 and 30
	{
		price=distance*50.0;
		return price;
	}
	
	else if (distance>=30)//when distance is greater than 30
	{
		price=(30*50.0)+((distance-30)*40.0);
		return price;
	}
	
	else if (price<0)//when distance entered is less than 0
	{
		printf("Distnace error!");
	}
return 0;
}

