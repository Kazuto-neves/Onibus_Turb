#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "onibus.h"
#include "Pessoas.h"

void valor (nPessoas *a , nOnibus x){
    if ((*a).idade <6 || (*a).idade >= 60) {
        printf("Tera alguma pessoa de idade acima de\n 60 anos ou abaixo dos 6 anos\n se sim digite quantas pessoas \n se nao digite 0(zero): ");
        scanf("%d",&x.q);
        printf("-----------------------------------------------------------------\n");
        x.preco=x.pe+x.pt+x.pd+(x.pq=1*(x.quat-x.q-1));
        printf("%s%s o valor dessa viagem sera de:R$ %g \n",(*a).sexo,(*a).nome,x.preco);
        x.total+=x.preco;
    } else {
    printf("Tera alguma pessoa de idade acima de\n 60 anos ou abaixo dos 6 anos\n se sim digite quantas pessoas \n se nao digite 0(zero): ");
    scanf("%d",&x.q);
    printf("-----------------------------------------------------------------\n");
    x.preco=x.pe+x.pt+x.pd+(x.pq=1*(x.quat-x.q));
    printf("%s%s o valor dessa viagem sera de:R$ %g \n",(*a).sexo,(*a).nome,x.preco);
    x.total+=x.preco;
    }



int main(void){
    nPessoas *a;
    nOnibus x;
    int i;
    char s[50];
    while (strcmp(nPessoas->nome,"end")!=0){
        lerPessoa(s);
        MouF(s);
        tub(i);
        valor(s,i);
    }
    
    printf("Total arrecadado foi de:R$ %g",x.total);
    printf("\n");
    system("pause");
    return 0;
}
