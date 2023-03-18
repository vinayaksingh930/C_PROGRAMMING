#include<math.h>
#include <stdio.h>

int main()
{
     int n,x,rem,res=0,count;
     printf("enter a number:");
     scanf("%d",&n);
     count=log10(n)+1;
     x=n;
     while(n!=0){
         rem=n%10;
         res+=pow(rem,count);
         n/=10;
     }
    
     if(x==res)
     printf("armstrong");
     else
     printf("not armstrong");

    return 0;
}
