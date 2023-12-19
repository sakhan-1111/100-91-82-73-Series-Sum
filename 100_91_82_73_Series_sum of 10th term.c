#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j=0,s,r=0;

    for(i=1; i<=10; i++)
    {
        s=100-j;
        j=j+9;
        r=r+s;
        printf("%d+", s);
    }
    printf("\nSum = %d",r);
    return 0;
}

