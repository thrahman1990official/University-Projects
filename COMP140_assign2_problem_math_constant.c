#include<stdio.h>

int main()
{
float nValue;
printf("Enter Value of n: ");
scanf("%f",&nValue);
int c;					//variable for loop counting
float temp=1;				//temporary variable used for approximation
float approx=1;				//approximation initialized as one initially
for(c=1; c<=nValue; c++)
	{
	temp=temp/c;
	approx=approx+temp;
	}
printf("Approximation of e is %.2f \n",approx);
return 0;
}
