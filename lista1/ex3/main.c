#include "racional.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    Racional r1, r2, sum, mul;

    r1 = cria();
    r2 = cria();
    sum = soma(&r1, &r2);
    mul = mult(&r1, &r2);

    printf("%d/%d\n",sum.numerador,sum.denominador);
    printf("%d/%d\n",mul.numerador,mul.denominador);


    return 0;
}