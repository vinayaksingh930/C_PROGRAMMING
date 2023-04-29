#include <stdio.h>


int main() {
int n,c,y=0;
    scanf("%d",&n);
    while(n!=0){
        c=n%10;
        y+=c;
        n=n/10;
    }
    printf("%d",y);
}
