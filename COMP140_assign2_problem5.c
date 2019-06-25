#include<stdio.h>

int main()
{
int inputNum;

printf("Please enter a positive integer number. ");
scanf("%d", &inputNum);

if(inputNum>999)
	{
	printf("%d has four or more digits.\n", inputNum);
	}
	else
   	 {
	 if(inputNum>99)
	   	{
		printf("%d has three digits.\n", inputNum);	
	   	}
	        else
	           {
		   if(inputNum>9)
		   	{
			printf("%d has two digits.\n", inputNum);		
		   	}
		   else
			{
			printf("%d has only one digit.\n", inputNum);
			}
		   }
	}
printf("Goodbye...!");
return 0;
}
