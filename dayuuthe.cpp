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
		int n=strlen(s);
		if(check(s)==1)
		{
			int demle=0,demchan=0;
			for(int i=0;i<strlen(s);i++)
			{
				int x=(int)(s[i]-'0');
				if(x%2==0) demchan++;
				else demle++;
			}
			if(demle==demchan) printf("NO\n");
			else if(demle>demchan&&n%2!=0) printf("YES\n");
			else if(demchan>demle&&n%2==0) printf("YES\n");
			else printf("NO\n");
		
		}
		else printf("INVALID\n");
	
	}
}
