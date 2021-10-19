#include <stdio.h>
#include <iostream>

 
long ucln(long a, long b)
{
    long r;
    while (a%b != 0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}
 
int main()
{
    long a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("%d\n", ucln(a,b));
	printf("%d", a*b/ucln(a,b));
    return 0;
}
