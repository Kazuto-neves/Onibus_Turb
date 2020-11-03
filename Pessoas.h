#ifndef PESSOAS_H_
#define PESSOAS_H_

typedef struct {
    char nome[20],sexo[2],s[2];
    int idade;
}nPessoas;

void lerPessoa(nPessoas *a);
void MouF(nPessoas *a);

#endif
