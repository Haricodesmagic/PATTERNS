#include <stdio.h>

int main()
{
	int i,j,k,s,n;
	printf("Enter the value :- ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		for(s=0; s<n-i; s++)
		{
			printf(" ");
		}
		for (j=0; j<2*i+1; j++)
		printf("*");
		printf("\n");	
	}
	for (i=1; i<n; i++)
	{printf(" ");
		for(s=0; s<i; s++)
		{
			printf(" ");
		}
		for (j=0; j<2*n-2*i-1; j++)
		printf("*");
		printf("\n");
    }
	return 0;
}
