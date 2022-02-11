#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if((l+2*w)*(b+w*2)>(l*b))
    {
        printf("%d",((l+2*w)*(b+w*2)*c)-(l*b*c));
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}