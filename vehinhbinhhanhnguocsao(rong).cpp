#include<stdio.h>

int main()
{
	int doc , ngang ;
	int i ,j ;
	scanf("%d %d", &doc , &ngang);
	
	for (i=1 ; i<=doc ; i++)
	{
		for (j=i-1; j >= 1; j--)
		{
			printf("~");
		}
		for(j=1; j<=ngang; j++)
		{
			if(i==1||i==doc||j==1||j==ngang) printf("*");
			else printf(".");
		}
		printf("\n");
	}
return 0; 
}

