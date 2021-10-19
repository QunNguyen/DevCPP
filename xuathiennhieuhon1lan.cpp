#include<stdio.h>

int check(int b[], int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(x==b[i]) return 0;
	}
	return 1;
}

int dem(int a[], int n ,int x)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(x==a[i]) d++;
	}
	return d;
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[1001];
	int b[1001]={0};
	int j=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(dem(a,n,a[i])>1&&check(b,j,a[i])==1)
		{
			b[j]=a[i];
			j++;
		}
	}
		
	if(j==0) printf("0");
	for(int i=0;i<j;i++)
	{
		printf("%d ",b[i]);
	}
}
