#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float N,B,G,I,D;
    float a,b,c;
    scanf("%f%f%f%f%f",&N,&B,&G,&I,&D);
    a=B*I;
    b=G*D;
    c=a-b;
    if (c>0)
    {
        printf("Simple Questions");
        
    }
    else if(c<0)
    {
        printf("Funny Questions");
        
    }
    else
    {
        printf("God Knows!");
        
    }
    return 0;
}
