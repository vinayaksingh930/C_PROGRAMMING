#include<math.h>
#include <stdio.h>

int main()
{
    int x,count,y=0,rem;
    scanf("%d",&x);
    count=log10(x);
    while(x!=0){
        rem=x%10;
        y+=pow(10,count)*rem;
        x/=10;
        count--;
    }
    printf("the reverse of the digit is:%d",y);
    return 0;
}
