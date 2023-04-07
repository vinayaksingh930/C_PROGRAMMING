
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
    printf("enter pos");
    scanf("%d",&pos);
    for(int i=pos;i<m-1;i++)
    a[i]=a[i+1];
    
    m--;
    
}
    printf("the new array is\n");
for(int i=0;i<m;i++)
   printf("%d\n",a[i]);


    return 0;
}
