#include <ctype.h>
#include <stdio.h>

int main()
{
    char a,b;
   printf("Enter alphabet:");
   scanf("%c",&a);
   b=toupper(a);
   ((b>=65)&&(b<=90))?printf("this is alphabet:%c",a):printf("this is not a alphabet:%c",a);
    return 0;
}
