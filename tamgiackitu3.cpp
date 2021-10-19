#include<stdio.h>

int main()

{
	int n,m;
	scanf("%d",&n);
	int a[n+1][n+1]={0};
	char b='A';
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			a[i][j]=b;
			b++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j][i]==0) printf(" ");
			else printf("%c ",a[j][i]);
		}
		printf("\n");
	}	
}

