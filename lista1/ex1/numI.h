#ifndef NUMI_H
#define NUMI_H

typedef struct {
    float ptReal;
    float ptImaginaria;    
} NumI;

void CriaNumI(NumI* nI);
void ModificaNumI(NumI* nI, float a, float b);
NumI soma(NumI* n1, NumI* n2);
NumI sub(NumI* n1, NumI* n2);
NumI mult(NumI* n1, NumI* n2);
NumI divs(NumI* n1, NumI* n2);

#endif 
