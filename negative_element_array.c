#include <stdio.h>

int main()
{
    int i,j;
    scanf("%d",&i);
    int a[i];
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);
    for(j=0;j<i;j++)
        {
            if(a[j]<0)
            printf("%d,",a[j]);
        }


    return 0;
}
