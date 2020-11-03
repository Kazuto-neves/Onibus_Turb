#ifndef ONIBUS_H_
#define ONIBUS_H_

# include "Pessoas.h"

typedef struct {
    int emp,tipo,det,quat,q;
    float pe,pt,pd,pq,preco,total;
}nOnibus;

void tub (nOnibus x);

#endif