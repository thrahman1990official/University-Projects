#include<stdio.h>
#include<math.h>

int main()
{
char operator;
float num1, num2;
float output;
printf("Enter simple expression: ");
scanf("%f %c %f", &num1, &operator, &num2);

if((operator=='+')||(operator=='*')||(operator=='-')||(operator=='/'))
{
	if(num2!=0)
	{
	switch(operator)
		{
	case '+' :
		output = num1 + num2;
		printf("Output: %.2f + %.2f = %.2f",num1,num2,output);
		break;
	case '*' :
		output = num1 * num2;
		printf("Output: %.2f * %.2f = %.2f",num1,num2,output);
		break;
	case '-' :
		output = num1 - num2;
		printf("Output: %.2f - %.2f = %.2f",num1,num2,output);
		break;
	case '/' :
		output = num1 / num2;
		printf("Output: %.2f / %.2f = %.2f",num1,num2,output);
		break;
		}
	}
	else
		{
		printf("Output: Division by zero!");
		}
}
else
	{
	printf("Output: Unknown operator!");
	}
return 0;
}
