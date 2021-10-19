#include<stdio.h>

int main()
{
	int N;
	int i, j;
	scanf("%d", &N);
	
	for(i=1 ; i<=N; i++)
	{
        for(j=N; j>N-i; j--)
        {
            printf("%d ", j);
        }

        for(j=1; j<= N-i; j++)
        {
            if (j>0) printf("%d ", (N -i + 1));
        }

        printf("\n");
    }
}
