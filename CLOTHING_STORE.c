#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,j,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        {
            c=1;
        for(j=0;j<n;j++)
        {
        if(arr[i]==arr[j] && i!=j)
        {
            c++;
            arr[j]=-1;
        }
        }
        p+=c/2;
        }
    }
    printf("%d",p);
}