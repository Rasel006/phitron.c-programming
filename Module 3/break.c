#include<stdio.h>
int main(){
    int i,n;
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1){
        if(i==5){
            break;

        }
        printf("%d - even\n",i);
    }
    return 0;
    }
