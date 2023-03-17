#include <stdio.h>

int main()
{
     int n,x=0;
     printf("enter a number:");
     scanf("%d",&n);
     if(n==0||n==1)
     x=1;
     for(int i =2;i<=n/2;i++){
         if(n%i==0){
             x=1;
             break;
         }
     }
     if(x==0)
     printf("prime");
     else
     printf("not prime");

    return 0;
}
