#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"Empresa.h"
#include "uteis.h"


void inicializar(empresas *E){(*E).qtd=0;}
void lerEmpresa(empresa *e,int i){
   printf("Codigo: %d\n",(*e).id=i);
   limpa();
   printf("Nome:");		lerString((*e).nome,_MAX_);
}
int obterIndice(empresas E, int i){
   int achou,k;
   achou=0;
   k=0;
   while (!achou && i<E.qtd)
      if (E.v[k].id==i)
         achou = 1;
      else
         i++;
   return achou?i:-1;
}
void inserir(empresas *E, empresa e){
   (*E).v[(*E).qtd] = e;
   (*E).qtd++;
}


int existe(empresas E, int i){
   return obterIndice(E, i)!=-1;
}

void remover(empresas *E, int i){
   int pos = obterIndice(*E, i);
   if (pos!=-1){
       (*E).v[pos] = (*E).v[(*E).qtd-1];
       (*E).qtd--;
   }
}

void alterar(empresas *E, int i , empresa e){
   int pos = obterIndice(*E, i);
   if (pos!=-1)
       (*E).v[pos] = e;
}

void listar(empresas E){
   int i;
   printf("%-20s\n","Nome");
   for(i=0;i<62;i++)
     printf("-");
   printf("\n");
   for (i=0; i<E.qtd; i++){
      empresa e = E.v[i];
      printf("%-20s\n",
	     e.nome);
   }
   for(i=0;i<62;i++)
     printf("-");
   printf("\n");
}