#include<stdio.h>

int main()
{
																						//declare variables for item-code, item-price 
int itemCode;                                                                           //variables for month, day, year
float itemPrice;
int mon, day, year;

printf("Enter item Code: ");                                                            //inputting item-code
scanf("%d", &itemCode);
printf("\n");

printf("Enter price: ");                                                                //inputting item-price
scanf("%f", &itemPrice);                                                          
printf("\n");

printf("Enter purchase date (mm/dd/yyyy): ");                                           //inputting day, month, year in order with slashes between them
scanf("%2d/%2d/%4d", &day, &mon, &year);

printf("Code    Price      Purchase Date \n");                                          //outputting the item-code, item-price, day, month, year
printf("----    ---------  ------------- \n");
printf("%d      $%-4.2f    %2d/%2d/%4d   \n", itemCode, itemPrice, day, mon, year);

return 0;
}
