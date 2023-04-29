#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,min,max,i;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
    scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
          min=a[i];   
           if(max<a[i])
            max=a[i];       
    }
    
    printf("Min=%d",min);
    printf(" Max=%d\n",max);
    }
    return 0;
}
