#include<stdio.h>
#include<math.h>

int giaithua(int n) 
{
	int t=1;
	for(int i = 1; i <= n; i++) 
	{
	  	t = t*i;
	}
	 return t;
}

int tong(int n) {
 int tong=0;
 int m=n;
 while(n>0) {
  int t=n%10;
  tong = tong + giaithua(t);
  n = n/10;
 }
 if(tong==m) return 1;
 else return 0;
}

int main()
{
	int a,b,x,y;
	scanf("%d%d", &a,&b);
	if(a>b)
	{
		x=b;
		y=a;
	}
	else
	{
		x=a;
		y=b;	
	}
	for(int i=x;i<=y;i++)
	{
		if(tong(i)==1)
		{
			printf("%d ",i);
		}
	}
}
