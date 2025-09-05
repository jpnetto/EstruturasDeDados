#include "numI.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    NumI n1, n2, n3;
    CriaNumI(&n1); 
    CriaNumI(&n2);
    n3 = soma(&n1, &n2);
    printf("%.2f %.2f\n", n3.ptReal, n3.ptImaginaria);
    return 0;
}
