#include<stdio.h>

int main()
{
int a,b;					//variables needed for looping
int std_num;					//variable for finding the number of students
int inp_gpa[4]={0};				//variable for finding the g.p.a of students
float std_prc;					//variable for finding the percentage of students
printf("Enter number of Student: ");
scanf("%d", &std_num);
printf("\nThe total number of student is %d\n", std_num);
printf("\n***************\n");
int total_std;

do{
	for(a=1;a<=std_num;a++)
	{	
		printf("\nEnter GPA for student #%d is: ", a);
		scanf("%d", &b);
		if(b==1)
			{
			inp_gpa[0]++;
			}
		if(b==2)
			{
			inp_gpa[1]++;
			}
		if(b==3)
			{
			inp_gpa[2]++;
			}
		if(b==4)
			{
			inp_gpa[3]++;
			}
		if(b>4)
			{
			printf("INVALID!");
			}
		for(a=1; a<=4; a++)
		{
		printf("\n GPA %d --- %d students", a, inp_gpa[a-1]);
		}
		printf("\n ***************** \n");
		for(a=1; a<=4; a++)
		{
		std_prc=(inp_gpa[a-1]/(float)std_num)*100;
		printf("\n The percentage of students with GPA (%d) is %f", a, std_prc);
		}
	}
}while((total_std>0)&&(total_std<=std_num));

return 0;
}	
