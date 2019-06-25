#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int nums[30];		//for array of random numbers from one to ten
int i;			//need for looping random number
int searchNum;		//initializing variable for inputting the number to be search
srand(time(NULL));

for(i=0; i<=30; i++)		//random number generator between one and ten
	{
	nums[i]=1+rand()%20;
	printf("%d ", nums[i]);
	}
printf("\n");

int countNum=1;

		do
		{
		printf("\nEnter a number between 1 and 20 to be found (<=0 for exit): ");
			scanf("%d", &searchNum);	//inputting number to be searched
			printf("\n");
			if(searchNum==nums[i])
				{
				countNum++;
				}
			else if (searchNum<=0)
				{
				printf("End\n");
				return 0;
				}
			printf("%d appears %d times\n", searchNum, countNum++);
		}
		while(searchNum>0);

}



