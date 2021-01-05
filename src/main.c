#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "ulteis.h"
#include "Empresa.h"

#define ONE 49
#define TWO 50
#define TRE 51
#define FOR 52
#define KEY_ESC 27
//#define KEY_ENTER 13


int menu(){
  int opc;
  int key = 0;

  do {
    limparTela();
    printf("%s 1-Inserir\n",(key == ONE)? "-->":" ");
    printf("%s 2-Remover\n",(key == TWO)? "-->":" ");
    printf("%s 3-Alterar\n",(key == TRE)? "-->":" ");
    printf("%s 4-Mostrar Todos os Brinquedos\n",(key == FOR)? "-->":" ");
    printf("%s 0-Sair\n",(key == KEY_ESC)? "-->":" ");
	key = getch();
	//if(key == ONE)opc==1;
	//if(key == TWO)opc==2;
	//if(key == TRE)opc==3;
	//if(key == FOR)opc==4;
	//if(key == KEY_ESC)opc==0;
  } while (key);
  fflush(stdin);
  limparTela();
  return key;
}

int main(){
   empresas	E;
   empresa e;
   int  fim;
   int cod;
   char c[100];

   fim = 0;
   inicializar(&E);
   while(!fim){
     switch(menu()){
        case 49: /*inserir*/
		printf("Entre com o codigo da Empresa:");
		scanf("%d", &cod);
		if (existe(E, cod)){
			pausarTela("Ja existe!");
		}else{
			  lerEmpresa(&e,cod);
			  inserir(&E, e);
		}
           break;
        case 50: /*remover*/
           printf("Entre com o codigo da Empresa:");
           scanf("%d", &cod);
           if (existe(E, cod)){
              remover(&E, cod);
              pausarTela("Removido com sucesso!");
           } else {
           	 pausarTela("Não existe esse codigo\n sera criado");
        	 lerEmpresa(&e,cod);
        	 inserir(&E, e);
		   }
           break;
        case 51: /*alterar*/
           printf("Entre com o codigo da Empresa:");
           scanf("%d", &cod);
           if (existe(E, cod)){
              lerEmpresa(&e,cod);
              alterar(&E, cod, e);
              pausarTela("Alterado com sucesso!");
           } else {
           	 pausarTela("Não existe esse codigo\n sera criado");
        	 lerEmpresa(&e,cod);
        	 inserir(&E, e);
		   }
           break;
        case 52: /*Agenda*/
           listar(E);
           pausarTela(NULL);
           break;
		case 27:/*fim*/
           fim=1;
           break;
		   }
   }
   return 0;
}