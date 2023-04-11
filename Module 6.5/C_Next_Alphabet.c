#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='y'){
        ch=ch+1;
    }
    else if(ch=='z'){
        ch='a';
    }
    printf("%c\n",ch);
    return 0;
}