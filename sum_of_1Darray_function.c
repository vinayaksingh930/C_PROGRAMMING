#include <stdio.h>
void array(int,int *) ;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i =0;i<n;i++)
    scanf("%d",&a[i]);
    array(n,a);
    return 0;
}
void array(int n,int *a)
{
    int sum=0;
    for (int i=0;i<n;i++)
    sum+=a[i];
    printf("sum of the array is: %d",sum);
}
