#include<stdio.h>

int main()
{
int digOne, digTwo, digThree, digFour, digFive, digSix, digSeven, digEight, digNine;
int sumOfProd;
int remainderVal;
int checkDig;

printf("Enter the first nine digits of ISBN: ");
scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &digOne, &digTwo, &digThree, &digFour, &digFive, &digSix, &digSeven, &digEight, &digNine);
printf("\n");

sumOfProd = (digOne*10) + (digTwo*9) + (digThree*8) + (digFour*7) + (digFive*6) + (digSix*5) + (digSeven*4) + (digEight*3) + (digNine*2);
remainderVal = sumOfProd % 11;
checkDig = 11 - remainderVal;

printf("%d", checkDig);

return 0;
}
