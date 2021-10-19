#include<stdio.h>

int main()
{
	int doc , ngang ;
	int i,j;
	scanf("%d %d", &doc, &ngang);
	
	for(i=1; i<=doc ; i++)
	{
		for( j=1 ; j<=ngang ;j++)
		{
			if(j==1||j==ngang||i==1||i==doc) printf ("1");
			else printf("0");
		}
		printf("\n");
	}
return 0;
}
