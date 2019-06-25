#include<stdio.h>

int main()
{
float celTemp, fahTemp;

printf("Enter Fahrenheit temperature: ");

scanf("%f", &fahTemp);

celTemp = ( fahTemp - 32 ) * 5/9;

printf("Celsius equivalent is: %.2f", celTemp);

printf("\n");

return 0;
}
