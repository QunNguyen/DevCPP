#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    gets(a);
    int x = 0; 
    int y = 0;
    int z = 0;
    for(int i = 0 ; i< strlen(a); i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z' )
        {
            x++;
        }
        else if(a[i] >= '0' && a[i] <= '9')
        {
            y++;
        }
        else
        {
            z++;
        }
    }
    printf("%d %d %d", x, y, z);
    
}
