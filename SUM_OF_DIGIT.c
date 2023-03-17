#include <stdio.h>

int main()
{
    int x,sum=0,rem;
    scanf("%d",&x);
    while(x!=0){
        rem=x%10;
        sum+=rem;
        x/=10;
    }
    printf("the sum of the digit is:%d ",sum);
    return 0;
}
