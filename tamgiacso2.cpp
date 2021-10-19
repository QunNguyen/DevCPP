#include<stdio.h>

int main()

{
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int dem=0;
		if(i%2!=0)
		{
			for(int j=1;j<=n*2;j++)
			{
				if(j%2!=0)
				{
					printf("%d",j);
					dem++;
				}
				if(dem==i)
				{
					dem=0;
					break;
				}
			}
		}
		else
		{
			for(int j=1;j<=n*2;j++)
			{
				if(j%2==0)
				{
					printf("%d",j);
					dem++;
				}
				if(dem==i) 
				{
					dem=0;
					break;
				}
			}
		}
		printf("\n");
	}
	
}
