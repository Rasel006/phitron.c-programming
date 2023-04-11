#include<stdio.h>

int main(){
    int x,ans;
    scanf("%d", &x);
    ans=x/1000;
    if(ans%2==0) printf("EVEN\n");
    else printf("ODD\n");
    return 0;
}