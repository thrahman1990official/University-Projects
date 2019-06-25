#include<stdio.h>
int main()
{
int num;
printf("Enter an integer number: ");
scanf("%d", &num);
if(num%3!=0)                             //if the input number's remainder is not zero
{					 //we print statement that it is not divisible by three
printf("%d is not divisible by 3. \n", num);
}
else                                     //but if the input numbers remainder is zero
{                                        //we print statement that it is divisble by three  
printf("%d is divisible by 3. \n", num);
}
return 0;
}
