#include<stdio.h>

int check(int b[], int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(x==b[i]) return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[1001];
	int b[1001]={0};
	int dem[1001]={0};
	int j =0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(check(b,j,a[i])==1)
		{
			b[j]=a[i];
			j++;
		}
	}
	
	for(int i=0;i<j;i++)
	{
		for(int k=0;k<n;k++)
		{
			if(a[k]==b[i])
			{
				dem[b[i]]++;
			}
		}
	}
	
	for(int i=0;i<j;i++)
	{
		printf("%d %d ",b[i], dem[b[i]]);
		printf("\n");
	}
	
}
