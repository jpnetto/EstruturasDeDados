#include "numI.h"
#include <stdio.h>

void CriaNumI(NumI* nI){
    scanf("%f", &nI->ptReal);
    scanf("%f", &nI->ptImaginaria);
}

void ModificaNumI(NumI* nI, float a, float b) {
    nI->ptReal = a;
    nI->ptImaginaria = b;
}

NumI soma(NumI* n1, NumI* n2){
    NumI resultado;
    resultado.ptReal = n1->ptReal + n2->ptReal;
    resultado.ptImaginaria = n1->ptImaginaria + n2->ptImaginaria;
    return resultado;
}

NumI sub(NumI* n1, NumI* n2){
    NumI resultado;
    resultado.ptReal = n1->ptReal - n2->ptReal;
    resultado.ptImaginaria = n1->ptImaginaria - n2->ptImaginaria;
    return resultado;
}

NumI mult(NumI* n1, NumI* n2){
    NumI resultado;
    resultado.ptReal = (n1->ptReal * n2->ptReal) - (n1->ptImaginaria * n2->ptImaginaria);
    resultado.ptImaginaria = (n1->ptReal * n2->ptImaginaria) + (n1->ptImaginaria * n2->ptReal);
    return resultado;
}

NumI divs(NumI* n1, NumI* n2){
    NumI resultado;
    float denominador = (n2->ptReal * n2->ptReal) + (n2->ptImaginaria * n2->ptImaginaria);
    if (denominador == 0) {
        printf("Divisão Impossível\n");
        resultado.ptReal = 0;
        resultado.ptImaginaria = 0;
        return resultado;
    }
    resultado.ptReal = ((n1->ptReal * n2->ptReal) + (n1->ptImaginaria * n2->ptImaginaria)) / denominador;
    resultado.ptImaginaria = ((n1->ptImaginaria * n2->ptReal) - (n1->ptReal * n2->ptImaginaria)) / denominador;
    return resultado;
}
