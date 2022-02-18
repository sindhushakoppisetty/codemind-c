#include<stdio.h>
int main()
{
    int n,temp,r,sum=0;
    scanf("%d",&n);
   temp=n;
    for(;n>0;n=n/10)
    {
        r=n%10;
        sum=sum+r;
    }
    
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}