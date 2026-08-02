#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the value:  ");
	scanf("%d",&n);
	
	for(i=2;i<n+1;i++)
	{
		for(j=1;j<11;j++)
		{
			printf("%d*%d = %d\n",i,j,i*j);
		}
		printf("\n\n");
	}
}
