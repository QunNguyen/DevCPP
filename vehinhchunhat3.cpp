#include<stdio.h>

int main()
{ 	
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		if(i<m)
		{
			for(int k=i;k>=2;k--)
			{
				printf("%d",k);
			}
			for(int j=1;j<=m+1-i;j++)
			{
				printf("%d",j);
			}
		}
		else
		{
			for(int j=i;j>i-m;j--)
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}
