#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a>b)&&(a>c))
    {
        printf("%d",a);
    }
    else if ((b>a)&&(b>c))
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
    return 0;
}
