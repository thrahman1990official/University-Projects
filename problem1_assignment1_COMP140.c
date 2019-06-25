#include<stdio.h>

int main() 
{
																					//declare variables
float fn1, fn2; 																	//float number one and float number two
float sum; 																			//summation
float dif; 																			//difference
float pro; 																			//product
float div; 																			//division

printf("Please enter the first float number: ");
scanf("%f", &fn1); 																	//enter float number one
printf("\n");

printf("Please enter the second float number: ");
scanf("%f", &fn2); 																	//enter float number two
printf("\n");

sum = fn1 + fn2; 																	//equation for summation
printf("Sum of %.2f and %.2f is %.2f", fn1, fn2, sum);
printf("\n\n");

dif = fn1 - fn2; 																	//equation for difference
printf("Difference between %.2f and %.2f is %.2f", fn1, fn2, dif);
printf("\n\n");

pro = fn1 * fn2; 																	//equation for multiplication
printf("Product of %.2f by %.2f is %.2f", fn1, fn2, pro);
printf("\n\n");

div = fn1 / (float)fn2; 															//equation for division
printf("Division of %.2f by %.2f is %.2f", fn1, fn2, div);
printf("\n\n");

return 0;
}
