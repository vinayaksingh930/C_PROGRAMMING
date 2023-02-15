#include <stdio.h>

int main()
{
    int a,b,c;
   printf("Enter three number:");
   scanf("%d%d%d",&a,&b,&c);
   ((a>b) && (a>c))?printf("this is max:%d",a):((b>a)&&(b>c))?printf("this is max:%d",b):printf("this is max:%d",c);
    return 0;
}
