#include<stdio.h>

int main()
{
int n;
float numb;
float sum=0;
int i;
printf("Enter the number of values to be added up:");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	printf("Enter number %d:",i);
	scanf("%f",&numb);
	sum=sum+numb;
	}
printf("Sum of the %d items above is: %.2f", sum);
return 0;
}
