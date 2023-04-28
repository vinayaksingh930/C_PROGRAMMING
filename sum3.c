#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,sum=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (i%2==0){
           sum=sum-pow(i,3);
        }
        else{
            sum=sum+pow(i,3);
        }
    }
    printf("%d",sum);
    return 0;
}
