#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        count++;
    }
    if (count>2)
    printf("NO");
    else
    printf("YES");
    return 0;

}
