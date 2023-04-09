#include<stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);
    if(tk>=5000){
        printf("Cox's Bazar jabo\n");
        if(tk>=10000){
            printf("St.Martin jabo\n");
        }
        else{
            printf("Ferot chole ashbo\n");
        }
    }
    else{
         printf("kothaw jabo na");
    }
    return 0;
}