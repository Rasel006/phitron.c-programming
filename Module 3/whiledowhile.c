#include<stdio.h>
int main(){
    int i;
    i=1;
    while(i<=5){
        printf("%d\n",i);
        i++;
    }
    //do while-runs atleast 1 times
    i=99;
    do{
        printf("%d\n", i);
        i++;
    }while(i<=5);
    return 0;
}