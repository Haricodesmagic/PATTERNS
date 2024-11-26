#include <stdio.h>
/*   *
    * *
   * * *
  * * * *
 * * * * *
 */ 
int main()
{
	int i,j,k,s,n;
	printf("Enter the value :- ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		for(s=0; s<n-i+1; s++)
		{
			printf(" ");
		}
		for (j=0; j<i+1; j++)
		{
		printf("%d", j+1);
		if (j<i+1)
		printf(" ");
	} 
		printf("\n");
		
	}
	return 0;
}
