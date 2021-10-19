#include<stdio.h>

int main()

{
	int n,m;
	scanf("%d%d",&n,&m);
	char bd,kt;
	
	if(n>m)
	{
		bd='A'+n-1;
		kt=bd;
	}
	else
	{
		 bd='A'-n+m;
		 kt=bd+n-1;
	}
	int a[100][100];
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			a[i][j]=kt;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		int x=kt,dem=1;
		for(int j=1;j<=m;j++)
		{
			if(j>=1)
			{
				a[i][j]=x;
				if(dem<i)
				{
					x--;
					dem++;
				}
			}
		}
	}
	
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	
		
}

