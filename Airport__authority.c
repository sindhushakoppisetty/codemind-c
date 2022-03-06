#include<stdio.h>
int main()
{
    int n,L[10],i,Bill=0,T;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&L[i]);
    scanf("%d",&T);
    for(i=0;i<n;i++)
    {
        if(L[i]<=T)
        Bill+=1;
        else
         Bill+=2;
    }
    printf("%d",Bill);
    return 0;
}