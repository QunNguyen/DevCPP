#include<stdio.h>
#include<conio.h>
#include<math.h>

int  thuannghich(int n)
{
	int dao=0; long m=n;
	while (n>0) {
	dao=dao*10+n%10;
	n=n/10;}
	
}

int main()
{
	int n; 
	scanf("%d", n);
	if(dao==m) printf("0");
	else printf("1");
}
