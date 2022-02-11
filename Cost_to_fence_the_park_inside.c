#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if((l-2*w)*(b-2*w)>0)
    {
        printf("%d",(l*b*c)-((l-2*w)*(b-w*2)*c));
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}