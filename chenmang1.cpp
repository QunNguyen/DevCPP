#include<stdio.h>

void nhap(int a[], int n)
{
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void in(int b[], int m)
{
	for(int i=1;i<=m;i++)
	{
		printf("%d ",b[i]);
	}
}

int main()
{
	int a[101];
	int b[101];
	int n,m;
	scanf("%d%d",&n,&m);
	nhap(a,n);
	nhap(b,m);
	int k;
	scanf("%d" ,&k);
	if(k==0) in(b,m);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
		if(i==k) in(b,m);
	}
}
