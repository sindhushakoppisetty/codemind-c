#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   
        int a, fact=1;
        scanf("%d",&a);
        for(int j=1;j<=a;j++)
        fact=fact*j;
        printf("%d
",fact);
    }
    return 0;

}