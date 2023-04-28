#include <stdio.h>
#include<math.h>
#include<stdlib.h>
void cube(int c){
    printf("%d",c*c*c);
}
int fact(int f){
   
int i=1 ,s=1;

while(i<=f){

   s*=i;
    i++;
}
    return s;
}
void pail(int x){
    int count,y=0,rem,m;
    m=x;
    count= log10(x)+1;
    while(x!=0){
        rem=x%10;
        y+=pow(10,count-1)*rem;
        x/=10;
        count--;
    }
    if(m==y)
    printf("the digit is palindorme:%d",y);
    else
    printf("the digit is not palindrome:%d",y);
}
void prime(int n ){
         int x=0;
     if(n==0||n==1)
     x=1;
     for(int i =2;i<=n/2;i++){
         if(n%i==0){
             x=1;
             break;
         }
     }
     if(x==0)
     printf("prime") ;
     else
     printf("not prime");

}
void rev(int x){
    int count,y=0,rem;
    count=log10(x);
    while(x!=0){
        rem=x%10;
        y+=pow(10,count)*rem;
        x/=10;
        count--;
    }
    printf("the reverse of the digit is:%d",y);
}
void arm(int n){
         int x,rem,res=0,count;
     count=log10(n)+1;
     x=n;
     while(n!=0){
         rem=n%10;
         res+=pow(rem,count);
         n/=10;
     }
    
     if(x==res)
     printf("armstrong");
     else
     printf("not armstrong");
}
int main()
{
    while(1)
    {
    int a,c,f,p,pm,r,am;
    printf("Enter the number:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("enter a number to get its cube:");
        scanf("%d",&c);
        cube(c);
        break;
        case 2:
        printf("enter a number to get its fectorial:");
        scanf("%d",&f);
        printf("%d",fact(f));
        break;
        case 3:
        printf("enter a number to check pailndrome:");
        scanf("%d",&p);
        pail(p);
        break;
        case 4:
        printf("enter to check prime number:");
        scanf("%d",&pm);
        prime(pm);
        break;
        case 5:
        printf("Enter a number to reverce:");
        scanf("%d",&r);
        rev(r);
        break;
        case 6:
        printf("Enter a number to check it is a aramstong or not:");
        scanf("%d",&am);
        arm(am);
        break; 
        case 7:
       exit(1);
        break;
        default:
        printf("invalid number");
    }
    }
 return 0;
}
