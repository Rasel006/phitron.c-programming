#include<stdio.h>
int main(){
    int a, b, sum, sub, mul;
    float divi;
    printf("Enter two integer number:");
    scanf("%d%d",&a, &b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    divi=(float)a/b;
    printf("%d\n%d\n%d\n%.2f\n", sum,sub, mul, divi);
    return 0;
}