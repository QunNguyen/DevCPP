#include <stdio.h>
#include<math.h>

int main()
{
    int doc, ngang, i, j;
    scanf("%d", &doc);
    scanf("%d", &ngang);

    for(i=1; i<=doc; i++)
    {
        for(j=doc; j>doc-i; j--)
        {
            if(j>abs(doc-ngang)) printf("%d", j);
        }

        for(j=1; j<= ngang-i; j++)
        {
            if (j>0) printf("%d", (ngang -i + 1));
        }

        printf("\n");
    }

    return 0;
}

