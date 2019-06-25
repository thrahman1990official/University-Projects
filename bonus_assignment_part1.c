#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double findMin(double arr1[], int n);           //prototype for finding minimum numbers in an array
double findMin(double arr1[], int n)		//function for finding minimum numbers in an array
{
int i;
double min=arr1[0];
for(i=1; i<n; i++)
	{
	if(min>arr1[i])
		min=arr1[i];
	}
	return min;
}

double findMax(double arr1[], int n);		//prototype for finding maximum numbers in an array
double findMax(double arr1[], int n)		//function for finding maximum numbers in an array
{
int i;
double max=arr1[0];
for(i=1; i<n; i++)
	{
	if(max<arr1[i])
		max=arr1[i];
	}
	return max;
}

void scaledNumbers(double arr1[], int n);	//prototype for finding scaled numbers in an array
void scaledNumbers(double arr1[], int n)	//function for finding scaled numbers in an array
{
int i;
double minArr1=findMin(arr1,n);
double maxArr1=findMax(arr1,n);

for(i=0; i<n; i++)
	{
	arr1[i]=(arr1[i]-minArr1)/(maxArr1-minArr1);		//formula for find the scaled numbers
	}
}

int main()
{
int i, n=10;
double arrLimit=100;
double arr1[n];

srand(time(NULL));

printf("Generated random numbers from 1-100:\n");
for(i=0; i<n; i++)
	{
	arr1[i]=((double)rand()/(double)(RAND_MAX))*arrLimit;
	printf("%.2f ", arr1[i]);
	}

scaledNumbers(arr1,n);
printf("\nScaled numbers are:\n");
for(i=0; i<n; i++)
	{
	printf("%.2f ", arr1[i]);
	}
printf("\n");

return 0;
}


