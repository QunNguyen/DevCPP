#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	for (int i=0 ; i<n ; i++)
	{
		scanf("%d", &a[i]);
	}
	if(n<0) return 0;
	
	int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
	}
	
	for (int i=0 ; i<n; i++)
	{
		if (a[i] % 2 ==0)
		{ 
            printf("%d ", a[i]);
		}
	}
	
		for (int i=0 ; i<n; i++)
	{
		if (a[i] % 2 !=0)
		{ 
            printf("%d ", a[i]);
		}
	}
	return 0;
}



