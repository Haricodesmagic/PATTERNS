#include <stdio.h>

int main()
{
	int i,j,k,n;
	k=1;
	printf("Enter the value :- ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		for(j=0; j<i+1; j++)
		{
			printf("%d", k++);
		}
		printf("\n");
		
	}
	return 0;
}
