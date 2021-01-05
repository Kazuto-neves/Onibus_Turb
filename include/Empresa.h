#ifndef _EMPRESA_H_
#define _EMPRESA_H_

#define _MAX_ 100

typedef struct{
    int id;
    char nome[_MAX_];
}empresa;

typedef struct {
    empresa v[_MAX_];
    int qtd;
}empresas;

void inicializar(empresas *E);
void lerEmpresa(empresa *e, int i);
int obterIndice(empresas E, int i);
void inserir(empresas *E, empresa e);
int existe(empresas E, int i);
void remover(empresas *E, int i);
void alterar(empresas *E, int i, empresa e);
void listar(empresas E);



#endif // !_EMPRESA_H_