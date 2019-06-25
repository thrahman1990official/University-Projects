#include<stdio.h>

int main()
{
int quarter, dime, nickle, penny, cent, dollar;											//variable decleration
																						
printf("Tell me how many quarter, dimes, nickles, and pennies, you have.\n");			//instruction for entering input
printf("I will tell you how many dollars and cents are in your pocket.\n");

printf("Number of quarters: ");															//inputting the amount of quarters, dimes, nickles, pennies that the individual has
scanf("%d", &quarter);
printf("Number of dimes: ");
scanf("%d", &dime);
printf("Number of nickles: ");
scanf("%d", &nickle);
printf("Number of pennies: ");
scanf("%d", &penny);

cent = (quarter * 25) + (dime * 10) + (nickle * 5) + penny;							   //equation for finding amount of cents
dollar=(cent - cent%100) / 100;															//equation for finding amount of dollars
cent=cent%100;
																						//outputting the dollars and cents the individual has
printf("You have %d dollars and %d cents in your pocket.", dollar, cent); 
printf("\n");

return 0;
}
