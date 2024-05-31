#include <stdio.h>



int main(void){
    int i;
    long long int X,money;
    scanf("%lld",&X);
    money = 100;

    for(i=1  ; ;i++ ){
        money = money * 1.01;
        if(X<=money){
            printf("%d",i);
            return 0;
        }
    }
}