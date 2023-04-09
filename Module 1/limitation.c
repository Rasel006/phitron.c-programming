#include<stdio.h>
int main(){
    int a =1000000000;
    long long int b = 1000000000000000;
    float c=2.123456;
    double d=2.123456789123456;
    printf("%d\n%lld\n%.6f\n%.15lf", a,b,c,d);
    return 0;
}