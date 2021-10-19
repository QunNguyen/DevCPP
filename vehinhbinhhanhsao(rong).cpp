#include<stdio.h>

int main()
{
	int N, i, j, k;
	scanf("%d", &N);
	
	for(i=1;i<=N;i++)
	{
		for(j=i;j<N; j++)
		{ 
			printf("~");
		}
		
		for(j=1;j<=N;j++)
		{	
		if(i==1 || i==N || j==1 || j==N) 
			printf("*"); else printf(".");
			
		}
	printf("\n");	
	}
}
