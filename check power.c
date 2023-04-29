#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int num;
     scanf("%d", &num);
   if((num != 0) && ((num &(num - 1)) == 0))
      printf("1");

   else
      printf("0");
    return 0;
}
