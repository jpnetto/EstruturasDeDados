#include "racional.h"
#include <stdio.h>
#include <stdlib.h>

Racional cria(){
    Racional r1;
    do{
        scanf("%d %d",&r1.numerador, &r1.denominador);
    } while(r1.denominador == 0);
    
    return r1;
}

Racional soma(Racional* r1, Racional* r2){
    Racional resultado;
    
    resultado.numerador = (r1->numerador*r2->denominador)+(r2->numerador*r1->denominador);
    resultado.denominador= r1->denominador*r2->denominador;

    return resultado;
}

Racional mult(Racional* r1, Racional* r2){
    Racional resultado;

    resultado.numerador = r1->numerador*r2->numerador;
    resultado.denominador= r1->denominador*r2->denominador;

    return resultado;
}

int testaIgualdade(Racional* r1, Racional* r2){
    if(((float)r1->numerador/(float)r1->denominador)==((float)r2->numerador/(float)r2->denominador)){
        return 1;
    } else{
        return 0;
    }
}

