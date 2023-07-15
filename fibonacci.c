#include<stdio.h>
int main(){
    int a=0,b=1,n,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",a);
        temp=a;
        a=b;
        b=temp+b;
    }
    }