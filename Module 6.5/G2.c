#include<stdio.h>

int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int count=0;
    int mouth=m;
    for(int i=1;i<=mouth;i++){
        if(n>=1 && mouth>=1 && k>=1){
            count++;
        }
    }
    n=n-count;
    m=m-count;
    k=k-count;
    if(n>=1 && k>=1){
        if((n/2)<=k){
            count=count+(n/2);
        }
        else{
            count=count+k;
        }
    }
    printf("%d\n", count);
    return 0;
}