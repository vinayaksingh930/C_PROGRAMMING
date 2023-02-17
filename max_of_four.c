#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
 void max_of_four(int a,int b,int c , int d){
   // int a,b,c,d;
    ((a>b)&&(a>c)&&(a>d))?printf("%d",a):
     ((b>a)&&(b>c)&&(b>d))?printf("%d",b):
     ((c>b)&&(c>a)&&(c>d))?printf("%d",c):
     ((d>b)&&(d>c)&&(d>a))
     ?printf("%d",d):
     printf("equal");
 }

int main() {
    int a, b, c, d, ans;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max_of_four(a,b,c,d);
    // printf("%d", ans)
    
    return 0;
}
