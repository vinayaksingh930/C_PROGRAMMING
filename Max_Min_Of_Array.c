
#include <stdio.h>

int main()
{
    int n,j,isShorted=0,temp;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    for (int i=0;i < (n-1);i++){
        isShorted=1;
        for (int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isShorted=0;
            }
        }
        if(isShorted)
        break;
    }
    
    printf("the min of the array is %d\n",a[0]);
    printf("the max of the array is %d",a[n-1]);

    return 0;
}
