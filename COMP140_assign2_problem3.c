#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
int main()
{
int inputNum;				//inputting your guessed number
int countTries=0;			//counting attempts for your tries
srand(time(NULL));			//initially the random number generator is zero
int goal=rand()%100+1;			//goal is assigned to be random number generated between one to hundred
bool luck = false;			//boolean variable for luck or no luck in guessing attempt for goal equaling you inputed number
int luckedOut;				//variable used for assigning to counTries when counting reaches its maximum limits	

while((!luck)&&(countTries<=10))	//while your guess attempt is initially not false and number of counting attempts is less or equal to ten
	{
	printf("Enter your guess (between 1 and 100):");	
	scanf("%d",&inputNum);
		if(inputNum>goal)				//when inputted number is greater than random number generated
			{
			printf("Too high...\n");
			}	
			else if(inputNum<goal)			//when inputted number is lesser than random number generated
				{
				printf("Too low...\n");
				}
				else                            //when inputted number is same as the random number generated
				   {
				   printf("The number was %d\n",goal);                
				   luck=true;
				   }
				   countTries++;
			   		luckedOut=countTries;
			     			if(luckedOut>10)		//if maximum number of tries exceeds ten attempts	
							{					     //we will finally tell what the right
							printf("Sorry the number was %d\n", goal);		        //random generated number is
							}
						else
							{
							printf("Try Again!\n");
							}		
	}
return 0;
}
