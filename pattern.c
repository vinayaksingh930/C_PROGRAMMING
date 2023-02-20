#include <stdio.h>

int main()
{
    int i, j, d,k,  n=5;


    for(i=1; i<=n; i++)
    {
        d = n-1; 
        k= i;  
        for(j=1; j<=i; j++)
        {
            printf("%-3d", k);

            k += d; 
            d--;
        }

        printf("\n");
    }

    return 0;
}
