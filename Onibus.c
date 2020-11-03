#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Pessoas.h"
#include "onibus.h"

void tub (nOnibus x){
    printf("Digite\n 1 para Unica R$ 10.00 \n 2 para tres amigos R$ 5.00: ");
    scanf("%d",&x.emp);
    if (x.emp == 1) {
        x.pe=10;
        printf("-----------------------------------------------------------------\n");printf("Digite\n 1 para Convencional R$ 5.00 \n 2 para Executivo R$ 10.00: ");
        scanf("%d",&x.tipo);
        if (x.tipo == 1){
            x.pt=5;
            printf("-----------------------------------------------------------------\n");
            printf("Digite\n 1 para Juiz de Fora R$ 30.00\n 2 para Cabo Frio R$ 40.00\n 3 para outros R$ 10.00: ");
            scanf("%d",&x.det);
            if (x.det == 1) {
                x.pd=30;
                printf("-----------------------------------------------------------------\n");
                printf("Digite quantas pessoas vao com voce: ");
                scanf("%d",&x.quat);
                printf("-----------------------------------------------------------------\n");
            } else if (x.det == 2) {
                x.pd=40;
                printf("-----------------------------------------------------------------\n");
                printf("Digite quantas pessoas vao com voce: ");
                scanf("%d",&x.quat);
                printf("-----------------------------------------------------------------\n");
            } else {
                x.pd=10;
                printf("-----------------------------------------------------------------\n");
                printf("Digite quantas pessoas vao com voce: ");
                scanf("%d",&x.quat);
                printf("-----------------------------------------------------------------\n");
            }
        }else{
            x.pt=10;
            printf("-----------------------------------------------------------------\n");
            printf("Digite\n 1 para Juiz de Fora R$ 40.00\n 2 para Cabo Frio R$ 50.00\n 3 para outros R$ 20.00: ");
            scanf("%d",&x.det);
            if (x.det == 1) {
                x.pd=40;
                printf("-----------------------------------------------------------------\n");
                printf("Digite quantas pessoas vao com voce: ");
                scanf("%d",&x.quat);
                printf("-----------------------------------------------------------------\n");
            } else if (x.det == 2) {
                x.pd=50;
                printf("-----------------------------------------------------------------\n");
                printf("Digite quantas pessoas vao com voce: ");
                scanf("%d",&x.quat);
                printf("-----------------------------------------------------------------\n");
            } else {
                x.pd=20;
                printf("-----------------------------------------------------------------\n");
                printf("Digite quantas pessoas vao com voce: ");
                scanf("%d",&x.quat);
                printf("-----------------------------------------------------------------\n");
                }
            }
        } else {
            x.pe=5;
            printf("-----------------------------------------------------------------\n");
            printf("Digite\n 1 para Convencional R$ 2.00 \n 2 para Executivo R$ 8.00: ");
            scanf("%d",&x.tipo);
            if (x.tipo == 1) {
                x.pt=2;
                printf("-----------------------------------------------------------------\n");
                printf("Digite\n 1 para Rio de Janeiro R$ 25.50 \n 2 para Cabo Frio R$ 20.10\n 3 para outros R$ 15.50: ");
                scanf("%d",&x.det);
                if (x.det == 1) {
                    x.pd=25.50;
                    printf("-----------------------------------------------------------------\n");
                    printf("Digite quantas pessoas vao com voce: ");
                    scanf("%d",&x.quat);
                    printf("-----------------------------------------------------------------\n");
                } else if (x.det == 2) {
                    x.pd=20.10;
                    printf("-----------------------------------------------------------------\n");
                    printf("Digite quantas pessoas vao com voce: ");
                    scanf("%d",&x.quat);
                    printf("-----------------------------------------------------------------\n");
                } else {
                    x.pd=15.50;
                    printf("-----------------------------------------------------------------\n");
                    printf("Digite quantas pessoas vao com voce: ");
                    scanf("%d",&x.quat);
                    printf("-----------------------------------------------------------------\n");
                }
            } else {
                x.pt=8;
                printf("-----------------------------------------------------------------\n");
                printf("Digite\n 1 para Rio de Janeiro R$ 30.50 \n 2 para Cabo Frio R$ 40.10\n 3 para outros R$ 25.50: ");
                scanf("%d",&x.det);
                if (x.det == 1) {
                    x.pd=30.50;
                    printf("-----------------------------------------------------------------\n");
                    printf("Digite quantas pessoas vao com voce: ");
                    scanf("%d",&x.quat);
                    printf("-----------------------------------------------------------------\n");
                } else if (x.det == 2) {
                    x.pd=40.10;
                    printf("-----------------------------------------------------------------\n");
                    printf("Digite quantas pessoas vao com voce: ");
                    scanf("%d",&x.quat);
                    printf("-----------------------------------------------------------------\n");
                } else {
                    x.pd=25.50;
                    printf("-----------------------------------------------------------------\n");
                    printf("Digite quantas pessoas vao com voce: ");
                    scanf("%d",&x.quat);
                    printf("-----------------------------------------------------------------\n");
                }
            }
        }