#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 unsigned long factorial(int num){
        int i;
        unsigned long fact=1;
        for (i=num;i>=1;i--)
            fact=fact*i;
        return fact;
    }
int main() {
    int i,n;
    scanf("%d",&n);
    float sum=0.0f;
    for (i=0;i<=n;i++){
        sum=sum + ((float) (i) / (float)(factorial(i)));
                   }
    printf("%f",sum);
    return 0;
}
