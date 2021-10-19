#include<stdio.h>
#include<string.h>

int check(char s[])
{
	if(s[0]=='0') return 0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]<'0'||s[i]>'9')
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[1001];
		scanf("%s",&s);
		if(check(s)==1)
		{
			int dem=0;
			int a[]={0,1,2,3,4,5,6,7,8,9};
			for(int i=0;i<10;i++)
			{
				for(int j=0;j<strlen(s);j++)
				{
					int x=(int)(s[j]-'0');
					if(a[i]==x)
					{
						dem++;
						break;
					}
				}
			}
			if(dem==10) printf("YES\n");
			else printf("NO\n");
		}
		else printf("INVALID\n");
	
	}
}

