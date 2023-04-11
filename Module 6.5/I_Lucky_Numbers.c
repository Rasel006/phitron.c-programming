#include<stdio.h>

int main(){
    int a,n1,n2; //20
    scanf("%d",&a);
    n2=a%10;
    n1=a/10;
    if(n2%n1==0 || n1%n2==0)
        printf("YES\n");
    
    else
        printf("NO\n");

    return 0;
}