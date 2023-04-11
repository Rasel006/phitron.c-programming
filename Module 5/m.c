#include<stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    if(x>='0' && x<='9'){
        printf("IS DIGIT\n");
    }
    else if((x>='a' && x<='z') || (x>='A' && x<='Z')){
        printf("ALPHA\n");
        if(x>='a' && x<='z'){
            printf("IS SMALL\n");
        }
        else{
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}