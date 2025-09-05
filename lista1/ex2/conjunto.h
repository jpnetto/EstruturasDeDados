#ifndef CONJUNTO_H
#define CONJUNTO_H

typedef struct {
    int v[10] = {0};   
} Conjunto;

void uniao(Conjunto c1, Conjunto c2); 
void interseccao(Conjunto c1, Conjunto c2); 
void insereElemento(Conjunto c1, int n);
void removeElemento(Conjunto c1, int n);
void diferenca(Conjunto c1, Conjunto c2);
void cria();
void TestaPertinencia(Conjunto c1, int n);
int menorValor(Conjunto c1);
int maiorValor(Conjunto c1);


#endif 
