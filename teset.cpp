#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	gets(s);
	
	int demchu=0;
	int demso=0;
	int demkitu=0;
	
	for(int i = 0 ; i<= strlen(s); i++)
	{
		if ( s[i] >= 97 && s[i] <= 122 ||s[i] >=65 && s[i] <= 90 ) demchu++ ; 
		else
		if(s[i] >=48 && s[i] <= 57) demso++;
		else
		demkitu++;
	}
	
	printf("%d %d %d", demso, demchu , demkitu-1);
}
