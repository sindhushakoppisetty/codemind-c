#include<stdio.h>
int main()
{
    int n,temp,r,rev=0,d=0,max=0,rev1=0;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    temp=rev;
    while(temp>0)
    {
        r=temp%10;
        if(d<1)
        {
            if(r==6)
            {
                r=9;
                d=1;
                
            }
        }
        rev1=rev1*10+r;
        temp=temp/10;
    }
printf("%d",rev1);
}
