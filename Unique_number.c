#include<stdio.h>
int main()
{
    int i,n,digit;
    static int arr[10];
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        arr[digit]++;
        n=n/10;
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]>1)
        {
            printf("Not Unique Number");
            break;
        }
    }
    if(i==5)
    {
        printf("Unique Number");
    
    }
}