#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
float radius, height, volume;

printf("Enter radius: \n");
scanf("%f", &radius);

printf("Enter height: \n");
scanf("%f", &height);

if(radius>=1)
	{
	if(radius<height)
		{
	volume = PI * pow(radius,2) * height;
	printf("The volume is: %.2f", volume);
		}
	else
		{
	printf("Height has to be bigger than radius");
		}
	}
else
	{
	printf("Radius cannot be smaller than 1.");
	}
return 0;
}
