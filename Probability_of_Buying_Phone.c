#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     double p1,p2,p3,A;
    double c=0;
    scanf("%lf%lf%lf%lf",&p1,&p2,&p3,&A);
    if (p1<A)
    {
        c++;
    }
    if(p2<A)
    {
        c++;
    }
    if (p3<A)
    {
        c++;
    }
    if (p1<A)
    {
     printf("%.3lf\n",1/c);
    }
    else 
    {
     printf("0.000\n");
    }
    if (p2<A)
    {
    printf("%.3lf\n",1/c);
    }
    else 
    {
      printf("0.000\n");
    }
    if (p3<A)
    {
     printf("%.3lf\n",1/c);
    }
    else 
    {
      printf("0.000\n");
    }
    return 0;
}
