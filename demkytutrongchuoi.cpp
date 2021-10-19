#include<stdio.h>
#include <string.h>
int main()
{
    char c[255];
    gets(c);
    int count, count1, count2;
    for(int i = 0 ; i <strlen(c); i++)
    {
        if(c[i] >= 'a' && c[i] <= 'z' || c[i] >= 'A' && c[i] <= 'Z')
        {
            count++;
        }
        else if(c[i] >= '0' && c[i] <= '9' )
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("%d %d %d", count, count1 count2);
   
}
