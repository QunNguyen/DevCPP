#include<stdio.h>
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n, i;
	    z
	    if (n<=0) return 0 ;
	    if (n<2)
	        {
	            return 0;            
	        }
	    else
	        {     
	            for(i = 2; i < n;)
	            if((n % i)==0)
	                {
	                    printf("%d ", i);
	                    n =n / i;
	                }
	            else  
	                ++i;
	            printf("%d ", n);                  
	        }
	    printf("\n");
 	}
}

