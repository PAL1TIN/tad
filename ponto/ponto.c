#include<math.h>
#include "ponto.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct ponto Ponto;
    struct ponto{
        float x;
        float y;
    };






Ponto* pto_cria(float x, float y){
        Ponto* p = (Ponto*) malloc(sizeof(Ponto));
        if(p == NULL){
            printf("Memoria insuficiente!\n");
            exit(1);
        }
        p -> x = x;
        p -> y = y;
        return p;

}





void pto_libera(Ponto* p){
    free(p);
}







void pto_acessa(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}







void pto_atribui(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}




float pto_distancia(Ponto* p1, Ponto* p2){
    float resultado, dx, dy;

    dx = p2->x - p1->x;
    dy = p2->y - p2->y;

    resultado = sqrt(dx*dx + dy*dy);

    return resultado;
}










