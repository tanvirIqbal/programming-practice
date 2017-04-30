//From the "52 programming problem and solution"
//Problem 3
#include <stdio.h>

int main()
{
    int i;
    int count = 0;
    for(i = 1000; i > 0 ; i--)
    {
        count++;
        printf("%d\t", i);
        if(count%5 == 0)
        {
            printf("\n");
        }
    }
}
