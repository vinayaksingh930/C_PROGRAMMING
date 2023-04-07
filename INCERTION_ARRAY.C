
#include <stdio.h>

int main()
{
     int n,m;
     printf("enter the number of elements");
     
    scanf("%d",&m);
     printf("enter the size of array:"); 
    scanf("%d",&n);
    int a[n],pos,ele;
        
if(m>=n)
printf("...not posible:::");
else{
    for(int i=0;i<m;i++){
        printf("enter the elements of array %d ",i+1);
    
    scanf("%d",&a[i]);}
    printf("enter pos & ele");
    scanf("%d %d",&pos,&ele);
    for(int i=m-1;i>=pos;i--)
    a[i+1]=a[i];
    a[pos]=ele;
    m++;
    
}
    printf("the new array is\n");
for(int i=0;i<m;i++)
   printf("%d\n",a[i]);


    return 0;
}
