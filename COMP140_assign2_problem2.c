#include<stdio.h>
//This program displays whether a number is a two digit positive integer or not
int main()
{
int inputNum;            //variable for input number
int countNum=0;            //variable for counting number of digits
int digitOne, digitTwo;       //variables for the first digit on the right and second digit
				//on the left of the two digit positive number of input number
int calcDigit;
							//inputing the number you want to find
printf("Enter a positive two-digit number: ");
scanf("%d", &inputNum);

calcDigit=inputNum;

while((inputNum != 0)&&(inputNum > 0))					//while loop for count number of digits
	{
	inputNum = inputNum/10;
	countNum++;
	}

if(countNum==2)								//if statement for verifying if number of digits is equal to two
	{
	printf("You entered the number ");
	digitTwo=calcDigit/10;						//left hand side second digit of two-digit number
	digitOne=calcDigit%10;						//right hand side second digit of two-digit number
		if(digitTwo==1)						//if statement for numbers between ten to nineteen
		{
		switch(digitOne)					//switch statment for above if statement with right side digit being
			{						//between zero to nine
			case 0: printf("Ten\n"); break;
			case 1: printf("Eleven\n"); break;
			case 2: printf("Twelve\n"); break;
			case 3: printf("Thirteen\n"); break;
			case 4: printf("Fourteen\n"); break;
			case 5: printf("Fifteen\n"); break;
			case 6: printf("Sixteen\n"); break;
			case 7: printf("Seventeen\n"); break;
			case 8: printf("Eighteen\n"); break;
			case 9: printf("Nineteen\n"); break;
			}
		}
		else							//else statement for numbers between twenty and ninety-nine
		   {
                   switch(digitTwo)					//switch statement with the left digit being between two to nine
		   		{
				case 2: printf("Twenty"); break;
				case 3: printf("Thirty"); break;
				case 4: printf("Fourty"); break;
				case 5: printf("Fifty"); break;
				case 6: printf("Sixty"); break;
				case 7: printf("Seventy"); break;
				case 8: printf("Eighty"); break;
				case 9: printf("Ninety"); break;	
				}
		   switch(digitOne)					//switch statement with right digit being between zero to nine
			   	{
				case 0: printf("\n"); break;
				case 1: printf("-One\n"); break;
				case 2: printf("-Two\n"); break;
				case 3: printf("-Three\n"); break;
				case 4: printf("-Four\n"); break;
				case 5: printf("-Five\n"); break;
				case 6: printf("-Six\n"); break;
				case 7: printf("-Seven\n"); break;
				case 8: printf("-Eight\n"); break;
				case 9: printf("-Nine\n"); break;
				}
		   }
	}
	else
	{
	printf("Invalid number!\n");
	}

return 0;
}
