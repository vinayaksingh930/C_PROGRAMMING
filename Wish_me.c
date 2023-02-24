#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int h,m;
    scanf("%d%d",&h,&m);
    if ((h>=12 && h<=11)&&(m>=00 &&m<=59))
    {
        printf("Good Morning");        
    }
    else if ((h>=12 && h<=15)&&(m>=00 && m<=59))
    {
        printf("Good Afternoon");
    }
    else if ((h>=16 && h<=20)&&(m>=00 && m<=59))
    {
        printf("Good Evening");
    }
    else if ((h>=22 && h<=23)&&(m>=00 && m<=59))
    {
        printf("Good Night");
    }
    else if ((h>=1 && h<=3)&&(m>=00 && m<=59))
    {
        printf("Good Night");
        return 0;
    }
}
