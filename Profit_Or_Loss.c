#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    c=((b-a)/a)*100;
    if(c<0)
    {
        c=c*-1;
        printf("Loss\n");
        printf("%.2f%c",c,37);
    }
    else{
        printf("Profit\n");
        printf("%.2f%c",c,37);
    }     
    return 0;
}
