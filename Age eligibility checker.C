#include <stdio.h>
int main()
{
		
		int age;
		printf("Enter your age:  ");
		scanf("%d",&age);
		
		if(age>=18)
		{
			printf("You are eligible you are eligible for voting\n");
			printf("Select your leader.");
		}
		else
		{
			printf("You are not eligible for voting.\n");
			printf("Good luck.");
		}
}
