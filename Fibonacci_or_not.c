#include<stdio.h>
int main(){
    int a=0,b=1,n,temp;
    scanf("%d",&n);
    for(int i=0;a<n;i++){
        temp=a;
        a=b;
        b=temp+b;
    }
    if(a==n)
        printf("True");
    else
    printf("False");
    
}