#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a%b==0?a%c==0?printf("Yes."):printf("No."):printf("No.");
    return 0;
}
