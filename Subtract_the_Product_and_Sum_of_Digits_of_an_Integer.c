#include<stdio.h>
int main(){
    int a,sum=0,prod=1,r,temp;
    scanf("%d",&a);
    temp=a;
    while(temp){
        r=temp%10;
        sum+=r;
        prod*=r;
        temp/=10;
    }
   printf("%d",prod-sum);
    return 0;
}