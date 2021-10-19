#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void chuanHoa(char c[]);
void chuanHoa2(char c[]);
void chuanHoa(char c[])
{
    c[0] = toupper(c[0]);
    for(int i = 1 ; i< strlen(c); i++)
    {
        c[i] = tolower(c[i]);
    }
}
void chuanHoa2(char c[])
{
     for(int i = 0; i < strlen(c) ; i++)
     {
         if(c[i] >= 'a' && c[i] <= 'z')
         {
             c[i] -= 32;
         }
     }
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char c[1000], a[20][50];
        int n = 0;
        gets(c);     
        char *token = strtok(c," ");
        while(token != NULL)
        {
            strcpy(a[n], token);
            ++n;
            token = strtok(NULL, " ");
        }
        for(int i = 1 ; i<= n-1 ; i++)
        {
            chuanHoa(a[i]);
            if(i != n-1)
            {
                printf("%s ", a[i]);
            }
            else
            {
                printf("%s", a[i]);
            }
        }
        printf(",");
        chuanHoa2(a[0]);
        printf(" %s", a[0]);
        printf("\n");
    }
}
