
#include <stdio.h>

int main()
{
    int x,pro=1,rem;
    scanf("%d",&x);
    while(x!=0){
        rem=x%10;
        pro*=rem;
        x/=10;
    }
    printf("the product of the digit is:%d ",pro);
    return 0;
}
