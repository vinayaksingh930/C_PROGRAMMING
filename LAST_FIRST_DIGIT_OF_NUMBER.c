#include<math.h>
#include <stdio.h>

int main()
{
int n,count,p,rem;
scanf("%d",&n);
count=log10(n)+1;
p=count;
while(n!=0){
    if(count==p){
        rem=n%10;
        printf("%d",rem);
        
    }
    if(p==1){
        rem=n%10;
        printf("%d",rem);
        
    }
    n/=10;
    p--;
}

    return 0;
}
