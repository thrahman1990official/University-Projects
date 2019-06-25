#include<stdio.h>

void isPerfect(int numbers, int status); //function prototype

void isPerfect(int numbers, int status)
{
int summation=0; //summation of numbers decleration
int a;
printf("Enter number: ");
scanf("%d", &numbers);
printf("\n");
	for(a=1; a<numbers; a++)
		{	
		if(numbers%a==0)
			{
			summation=summation+a;
			status=1;
			}
		}
	if(numbers==summation)
		{
		status=1;
		printf("TRUE\n");
		printf("\n");
		}
	else
		{
		status=0;
		printf("FALSE\n");
		printf("\n");
		}
	printf("Print all the numbers that are TRUE:\n ");
		for(numbers =1; numbers<=1000; numbers++)
			{
			summation=0;
			for(int a=1; a<=numbers/2; a++)
				{
				if(numbers%a==0)
					{
					summation+=a;
					}
				}
				if(summation==numbers)
				{
				printf("%d is TRUE\n", numbers);
				}
			}
}

int main()
{
int a;
int numbers;
int status;

isPerfect(numbers, status);
return 0;
}
