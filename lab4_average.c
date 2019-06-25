#include<stdio.h>

int main()
{
int numb;
float average;
float summation=0;
int counter=0;

while(numb!=9999)
{
printf("Enter a number(9999 to end): ");
	scanf("%d", &numb);
if(numb!=9999)
	{
	summation=summation+numb;
	counter++;
	}
}
average=summation/counter;
printf("%.2f", average);
return 0;
}
