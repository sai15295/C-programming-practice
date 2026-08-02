#include <stdio.h>
int main()
{
	int i;
	int a[5];
	int sum = 0;
	printf("Maths marks: ");
	scanf(" %d",&a[0]);
	printf("Science marks:  ");
	scanf(" %d",&a[1]);
	printf("Social marks:  ");
	scanf(" %d",&a[2]);
	printf("English marks: ");
	scanf(" %d",&a[3]);
	printf("Hindi marks:  ");
	scanf(" %d",&a[4]);
	for(i=0;i<5;i++)
	{
		sum+=a[i];
	}
	printf("TOTAL MARKS = %d\n",sum);
	printf("AVERAGE = %.2f",(float)sum/5);
}
