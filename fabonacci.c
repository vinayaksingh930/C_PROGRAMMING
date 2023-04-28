#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,y,z,n;
    x=0;
    y=1;
    scanf("%d",&n);
    printf("%d %d",x,y);
   for (int i=1;i<n-1;i++){
        z=x+y;
        printf(" %d",z);
        x=y;
        y=z;        
    }
    return 0;
}
