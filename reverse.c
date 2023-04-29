#include <stdio.h>
#include <math.h>
int main(){
    int a,c,count;
    int y=0;
    scanf("%d",&a);
    count=log10(a)+1;
    while(a!=0){
        c=a%10;
        y+=pow(10,count-1)*c;
        a/=10;
        count--;
        
    }
    printf("%d",y);
}
