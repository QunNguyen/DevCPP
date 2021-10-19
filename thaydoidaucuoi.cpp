#include<stdio.h>
#include<string.h>



int main()
{
	char s[10];
	scanf("%s",&s);
	int a=strlen(s)-1;
	
	if(s[a]!=48)
	{
		printf("%c",s[a]);
	}
	for(int i=1;i<strlen(s)-1;i++)
	{
		printf("%c",s[i]);
	}
	printf("%c",s[0]);
}
