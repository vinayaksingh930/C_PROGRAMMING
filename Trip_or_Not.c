#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,S,C,H,L,T ;
    int a,b;
    scanf("%d%d%d%d%d%d",&N,&S,&C,&H,&L,&T);
    a=(N-L)*T;
    b=(S*C*H);
    if(a<b){
        printf("Padhai Karenge");
    }
    else{
        printf("Goa Jaayenge");
    }
    return 0;
}
