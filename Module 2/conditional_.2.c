#include<stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    if(tk>=100){
        printf("Burger khabo");
    }
    else if(tk>=60){
        printf("Fuska khabo");
    }
    else if(tk>=30){
        printf("ice cream khabo");
    }
    else{
        printf("Sharadin kisu khabo na");
    }
    return 0;
}