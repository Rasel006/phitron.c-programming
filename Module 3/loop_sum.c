#include<stdio.h>
int main(){
    long long int sum=0;
    int i,n;
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1)
    sum+=i;
    {
        printf("Sum is %lld", sum);
    }
    return 0;
}