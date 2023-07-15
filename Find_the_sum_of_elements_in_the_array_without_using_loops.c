#include<stdio.h>
int main(){
    int a,sum=0;
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
        sum+=n[i];
    }
    printf("%d",sum);
    return 0;
}