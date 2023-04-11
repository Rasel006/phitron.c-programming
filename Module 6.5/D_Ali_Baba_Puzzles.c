#include<stdio.h>

int main(){
    int a,b,c;
    long int d;
    scanf("%d %d %d %ld",&a,&b,&c,&d);
    if(a+b*c==d){
        printf("YES\n");
    }
    else if(a+b-c==d){
        printf("YES\n");
    }
    else if(a-b+c==d){
        printf("YES\n");
    }
    else if(a-b*c==d){
        printf("YES\n");
    }
    else if(a*b+c==d){
        printf("YES\n");
    }
    else if(a*b-c==d){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}