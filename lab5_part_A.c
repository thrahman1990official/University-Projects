#include<stdio.h>

int main()
{
int nums[10];
int i;
int countPOS=0;
int countNEG=0;
int countODD=0;
int countEVE=0;

for(i = 0; i <= 9; i++)
	{
	printf("Enter a number: ");
	scanf("%d ", &nums[i]);	
	if(nums[i]>=0)
		{
		countPOS++;
		}
		else
		{
		countNEG++;
		}

	if(nums[i]%2==0)
		{
		countEVE++;
		}
		else
		{
		countODD++;
		}
	}
printf("Numbers are: ");
for(i = 0; i<=9; i++)
{
printf("%d, ",nums[i]);
}
printf("\n");
printf("# positive numbers = %d ", countPOS);
printf("\n");
printf("# negative numbers = %d ", countNEG);
printf("\n");
printf("# odd numbers = %d ", countODD);
printf("\n");
printf("# even numbers = %d ", countEVE);
printf("\n");
return 0;
}
