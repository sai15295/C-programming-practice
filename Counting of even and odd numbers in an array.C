#include <stdio.h>
int main()
{
	int i;
	int a[10],count = 0,COUNT=0;
	printf("Enter the items in the list:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		
		if(a[i]%2 == 0)
		{
			count+=1;
		}
		else
		{
			COUNT+=1;
		}
	}
printf("count of even numbers = %d\n",count);
printf("count of odd numbers = %d",COUNT);	
}
