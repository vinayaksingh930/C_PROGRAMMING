#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n1,n2,j;
    scanf("%d%d",&n1,&n2);
    for(int i=1;i<=n1&& i<=n2;i++){
        if(n1%i==0 && n2%i==0)
        j=i;
    }
    printf("%d",j);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
