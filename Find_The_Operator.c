#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,r;
    scanf("%d%d%d",&a,&b,&r);
    if ((a+b)!=r)
    {
        if(a*b==r)
        {
            printf("*");
        }
        if(a/b==r)
        {
            printf("/");
        }
        if(a-b==r)
        {
            printf("-");
        }
        if(a%b==r)
        {
            printf("%%");
        }
    }
    else{printf("+");}
    return 0;
}
