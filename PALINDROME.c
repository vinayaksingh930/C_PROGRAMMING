#include<math.h>
#include <stdio.h>

int main()
{
    int x,count,y=0,rem,m;
    scanf("%d",&x);
     m=x;
    count=log10(x)+1;
    while(x!=0){
        rem=x%10;
        y+=pow(10,count-1)*rem;
        x/=10;
        count--;
    }
    if(m==y)
    printf("the digit is palindorme:%d",y);
    else
    printf("the digit is not palindrome:%d",y);
    return 0;
}
