#include<stdio.h>
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n, i;
	    scanf("%d",&n);
	    int dem=0;
	    if (n<=0) return 0 ;
	    if (n<2)
	        {
	            return 0;   
	        }
	    else
	        {
				for(int i = 2; i <= n; i++)
				{
			        dem = 0;
			        while(n % i == 0)
					{
			            ++dem;
			            n /= i;
			        }
			        if(dem >= 1) printf("%d %d\n", i,dem);
			    }           
	        }
	    printf("\n");
 	}
}

