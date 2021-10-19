#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[10001];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++)
		{
			int dem=0;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>=a[i])
				{
					break;
				}
				else dem++;
			}
			if(dem==(n-i-1)) printf("%d ",a[i]);
		}
		printf("\n");
	}
}
