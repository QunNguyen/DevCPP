#include<stdio.h>

int fb(int n)
{
	long long f0=0,f1=1,fn;
	while(f0+f1<=n)
	{
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	if(fn==n||n==0) 
	{
		return 1;
	}
	else return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	int dem=0;
	printf("%d %d ",0,1);
	for(int i=1;i<=10000;i++)
	{
		if(fb(i)==1)
		{
			printf("%d ",i);
			dem++;
		}
		if(dem==n-2)
		{
			break;
		}
	}
}


