#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int findPrimeCount(int prime, int inp_num);	//prototype for finding prime number counter
int findPrimeCount(int prime, int inp_num)	//function for finding prime number counter
{
int counter=0;					//initially counter variable set to zero
int i, j;					//looping variable needed

for(i=2; i<=inp_num; i++)			//looping variable starting from two
	{					//till inputted number
	if(i%prime==0)				//if variable is divisible by the prime number
		{				//get number of primes in i
		j=i;
		while(j>0)
			{
			if(j%prime==0)
				{
				counter++;
				}
			else
				{
				break;
				}
			j=j/prime;
			}
		}
	}
	return counter;				//returning counter
}

bool isPrime(int prime);			//prototype for verifiying if number is prime
bool isPrime(int prime)				//function for verifiying if number is prime
{
int i;						//looping variable
for(i=2; i<=prime/2; i++)			
	{
	if(prime%i==0)
		return false;			//the variable is not prime
	else
		return true;			//the variable is prime
	}
}

int main()
{
int i, inp_num, counter;			//variables for iteration, inputting number
						//and counter used for counting
	while(1)
	{
	printf("\nEnter a number between 2 and 100(0 for exit):");	
	scanf("%d", &inp_num);			//inputting your number

	if(inp_num==0)
		{
		printf("\nEnd!\n");
			return 0;		//if inputted number is zero we exit program
		}
	else if((inp_num<0)||(inp_num==1)||(inp_num>100))
		{
		printf("\nInvalid Input!\n");	//if inputted number is less than zero
		}				//or greater than hundred or equaling to one
	else					//we have an invalid input
		{
		printf("%d!=", inp_num);
		for(i=2; i<=inp_num; i++)
			{
			if(isPrime(i))
				{
				counter=findPrimeCount(i,inp_num);
					if(i==2)
					{
					printf("(%d^%d)", i, counter);
					}		
					else
					{
					printf("*(%d^%d)", i, counter);
					}
				}
			}
		}
	}
}
