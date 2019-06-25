#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int countPositives(int i, int nums[]);
int countNegatives(int i, int nums[]);
int countOdds(int i, int nums[]);
int countEvens(int i, int nums[]);


int main()
{
int i;
srand(time(NULL));
int nums[20];

for(i=1; i<=20; i++)
{
nums[i] = -20 + rand()%40;
}
for(i=1; i<=20; i++)
{
printf("%d ", nums[i]);
}
printf("\n");

printf("%d", countPositives(20, nums));
printf("\n");
printf("%d", countNegatives(20, nums));
printf("\n");
printf("%d", countEvens(20, nums));
printf("\n");
printf("%d", countOdds(20, nums));
printf("\n");

return 0;
}	


int countPositives(int i, int nums[])
	{
		int countPOS=0;
		int x;
		for(int x=0; x<i; x++)
			{
			if(nums[x]>=0)
				{
				countPOS++;
				}
			}
	return countPOS;
	}

int countNegatives(int i, int nums[])
	{
	int countNEG=0;	
		int x;
		for(x=0; x<i; x++)
			{
			if(nums[x]<0)
				{
				countNEG++;
				}
			}
	return countNEG;
	}

int countEvens(int i, int nums[])
	{
	int countEVE=0;
		int x;
		for(x=0; x<i; x++)
			{
			if(nums[x]%2==0)
				{
				countEVE++;
				}
			}
	return countEVE;
	}
		
int countOdds(int i, int nums[])
		{
		int countODD=0;
			int x;
			for(x=0;x<i;x++)
				{
				if(nums[x]%2!=0)
					{
					countODD++;
					}
				}
		return countODD;
		}

