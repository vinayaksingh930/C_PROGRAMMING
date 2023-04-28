#include <stdio.h>
void array(int,int *,int*) ;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i =0;i<n;i++)
    scanf("%d",&a[i]);
    array(n,a,b);
     printf("The reversed array is:");
    for (int i =0;i<n;i++)
    printf("%d",b[i]);
    return 0;
}
void array(int n,int *a,int *b)
{ 
    int j=0;
    for (int i=(n-1);i>=0;i--){
    b[j]=a[i];
    j++;
}
}
