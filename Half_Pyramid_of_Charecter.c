#include <stdio.h>

int main()
{
    int row;
    printf("enter the the number of rows:");
    scanf("%d",&row);
  for (int j=1;j<=row;j++){
      char k=65;
      for (int i=1;i<=j;i++){
      printf("%3c",k++);
  }
  printf("\n");
}
    return 0;
}
