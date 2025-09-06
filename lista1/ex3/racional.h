#ifndef RACIONAL_H
#define RACIONAL_H

typedef struct {
    int numerador;  
    int denominador;
} Racional;

Racional cria();
Racional soma(Racional* r1, Racional* r2);
Racional mult(Racional* r1, Racional* r2);
int testaIgualdade(Racional* r1, Racional* r2);




#endif 
