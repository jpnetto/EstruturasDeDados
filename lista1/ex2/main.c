#include "conjunto.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    Conjunto c1 = cria();
    Conjunto c2 = cria();

    for (int i = 0; i < 10; i++) {
        insereElemento(&c1, i+2);
        insereElemento(&c1, i+6);
    }

    
    return 0;
}
