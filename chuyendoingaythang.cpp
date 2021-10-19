#include<stdio.h>


int main()
{
	int songay;
	scanf("%d",&songay);
	
	int sonam,sotuan,num1;
	sonam=songay/365;
	num1=songay%365;
	sotuan=num1/7;
	num1=num1%7;
	printf("%d %d %d",sonam, sotuan, num1);
}
