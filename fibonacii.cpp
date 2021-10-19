#include<stdio.h>

int main(){
	long long n;
	scanf("%lld",&n);
	long long f0=0,f1=1,fn;
	while(f0+f1<=n)
	{
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	if(fn==n||n==0) 
	{
		printf("1");
	}
	else printf("0");
}
