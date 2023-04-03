#include <stdio.h>

int main()
{
    int i,j;
    scanf("%d",&i);
    int a[i];
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);
    for(j=0;j<i;j++)
        printf("%d %p %d \n",j,&a[j],a[j]);


    return 0;
}
