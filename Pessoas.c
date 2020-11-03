#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Pessoas.h"

#define _TAM_NOME_ 50

void lerPessoa(nPessoas *a){
   lerString("Entre com o nome:", (*a).nome, _TAM_NOME_);
   lerString("Entre com\nM ser for Masculino\nou\nF se for feminino:", (*a).s);
   lerint("Entre com sua idade:", (*a).idade);
}

void MouF(nPessoas *a){
   if (strcmp((*a).s,"M")==0) {
      strcpy((*a).sexo, "Sr ");
   } else {
      strcpy((*a).sexo, "Sra ");
   }
}
