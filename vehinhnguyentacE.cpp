#include<stdio.h>
#include<math.h>

int main()
{
	long long n;
	scanf("%d", &n);
	int a[101][101]={0};
	int x=n+n;
	
	for(int i=0 ; i<x-1 ; i++)
	{
		for(int j=i ; j<x-1-i ; j++)
		{
			a[i][j] = n-i;
		}		
		for(int j=i+1 ; j<x-2-i ; j++)
		{
			a[j][x-2-i] = n-i;
		}
		for(int j=x-2-i ; j>=i ; j--)
		{
			a[x-2-i][j] = n-i;
		}		
		for(int j=x-2-i ; j>i ; j--)
		{
			a[j][i] = n-i;
		}
	}
	
	
	
	for(int i=0 ; i<x-1 ; i++)
	{
		for(int j=0 ; j<x-1 ; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
