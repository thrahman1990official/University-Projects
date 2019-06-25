#include<stdio.h>

int main()
{
int numb;
int i;
int fact=1;

printf("Enter a positive integer between 0 and 9: ");
scanf("%d", &numb);

if(numb<0)
{
printf("Input number cannot be less than 0");
}
else if (numb>9)
{
printf("Input number cannot be greater than 9");
}
else
{
for(i=1;i<=numb;i++)
	{
	fact=fact*i;
	printf("%d! is %d\n", i, fact);
	}
}
return 0;
}
