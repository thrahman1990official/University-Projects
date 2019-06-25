#include<stdio.h>
#include<stdlib.h>

int readNum();
int sumDigits(int num);
int reverse(int rev);

int main()
{
int num;
int rev;
int status;
	while(num>0)
	{
	printf("\nPlease enter a positive integer numbers: ");
		scanf("%d", &num);
	if(readNum(status))
		{
		printf("Sum of digits of %d is %d", num, sumDigits(num));
		printf("\n");
		rev=num;
		printf("Reverse of %d is %d", num, reverse(rev));
		printf("\n");
		}	
	}
}

int readNum()
{
int num;
int status;
	if(num<=0)
		{
	printf("\nInvalid Input\n");
		}
	else if(num>0)
		{
	printf("\nValid Input\n");
		}
	return status;
}

int sumDigits(int num)
{
int summation=0;
int sum;
while(num>0)
{
sum=num%10;
summation+=sum;
num/=10;
}
return summation;
}

int reverse(int rev)
{
int rem;
int reversal=0;
	while(rev>0)
	{
	rem=rev%10;
	reversal=reversal*10+rem;
	rev=rev/10;
	}
return reversal;
}
