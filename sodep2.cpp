#include<stdio.h>
#include<string.h>

int dao(char a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[n-i-1]) return 0;
	}
	return 1;
}

int check(char a[], int n)
{
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		int x=(int)(a[i]-'0');
		sum+=x;
	}
	if(sum%10==0) return 1;
	return 0;
}


int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[501];
		gets(a);
		int n=strlen(a);
		if(a[0]=='8'&&a[n-1]=='8')
		{
			if(dao(a,n)==1&check(a,n)==1) printf("YES");
			else printf("NO");
		} else printf("NO");
		printf("\n");
		
	}
}
