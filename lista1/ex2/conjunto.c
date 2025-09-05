#include "conjunto.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uniao(Conjunto c1, Conjunto c2){
    int resultado[20];
    int TAM=0;
    for(int i=0; i<c1.tamanho; i++){
        resultado[i] = c1.v[i];
        TAM++;
    }

    for(int i = 0; i<c2.tamanho; i++){
        if(!contem(resultado, c2.v[i])){
            resultado[TAM] = c2.v[i];
            TAM++;
        }
    }

    printf("A união é: ");
    for(int i = 0; i<TAM; i++){
        printf("%d ",resultado[i]);
    }
    printf("\n");
}

void interseccao(Conjunto c1, Conjunto c2) {
    printf("A intersecção é: ");

    for(int i=0;i<10;i++){
        int element = c1.v[i];
        int found = 0;

        for(int j=0; j<10; j++){
            if(element == c2.v[j]){
                found = 1;
                break;
            }
        }

        if(found){
            int flag=0;
            for (int k=0; k<i; k++) {
                if (c1.v[k]==element) {
                    flag=1;
                    break;
                }
            }

            if(!flag){
                printf("%d ",element);
            }
        }
    }

    printf("\n");
}


void insereElemento(Conjunto* c1, int n){
    c1->v[c1->tamanho++] = n;
}

void removeElemento(Conjunto* c1, int n){
    for(int i=0; i<c1->tamanho; i++){
        if (c1->v[i] == n) {
            for(int j = i; j < c1->tamanho - 1; j++){
                c1->v[j]=c1->v[j + 1];
            }
            c1->v[c1->tamanho - 1]=0;
            c1->tamanho--;
            break;
        }
    }
}

void diferenca(Conjunto* c1, Conjunto* c2){
    Conjunto resultado;
    resultado.tamanho = 0;

    for (int i = 0; i < c1->tamanho; i++) {
        if (!contem(c2, c1->v[i])) {
            resultado.v[resultado.tamanho++] = c1->v[i];
        }
    }

    printf("A diferença é: ");
    for(int i = 0; i<resultado.tamanho; i++){
        printf("%d ",resultado.v[i]);
    }
    printf("\n");
}

Conjunto cria(){
    Conjunto c1;
    c1.tamanho = 0;

    return c1;
}
int contem(Conjunto *c1, int n){
    for(int i=0; i<c1->tamanho; i++){
        if(c1->v[i] == n){
            return 1;
        }
    }
    return 0;
}
int menorElemento(Conjunto* c1){
    int menor = c1->v[0];
    for(int i=1; i<c1->tamanho; i++){
        if(c1->v[i]<menor)
            menor = c1->v[i];
    }

    return menor;
}

int maiorElemento(Conjunto* c1){
    int maior = c1->v[0];
    for(int i=1; i<c1->tamanho; i++){
        if(c1->v[i]>maior)
            maior = c1->v[i];
    }

    return maior;
}