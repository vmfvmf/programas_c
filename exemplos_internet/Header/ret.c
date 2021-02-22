#include<stdio.h>
#include<stdlib.h>
#include "ret.h"

#define MAIOR(a,b) (a>b)

struct ponto{
        int x;
        int y;
        };

struct retangulo{
        Ponto ver_1;
        Ponto ver_2;
        };
 
int main(void){
    Retangulo r;
    Ponto p;
    ESCREVE("Digite o vertice superior esquerdo:\nx: ");
    scanf("%d",&r.ver_1.x);    
    printf("y: ");
    scanf("%d",&r.ver_1.y);
    ESCREVE("Digite o vertice inferior direito:\nx: ");
    scanf("%d",&r.ver_2.x);    
    printf("y: ");
    scanf("%d",&r.ver_2.y);
    ESCREVE("Digite o ponto a ser verificado:\nx:");
    scanf("%d",&p.x);
    printf("y:");
    scanf("%d",&p.y);
    if(dentro_ret(&r, &p)){
                      printf("Ponto esta dentro do retangulo");
    }else printf("Ponto esta fora do retangulo");
    getch();
}

int dentro_ret(Retangulo *p_ret, Ponto* p_p){
    if(!MAIOR(p_ret->ver_1.x, p_ret->ver_2.x))
                              trocar(&p_ret->ver_1.x, &p_ret->ver_2.x);
    if(!MAIOR(p_ret->ver_1.y, p_ret->ver_2.y))
                              trocar(&p_ret->ver_1.y, &p_ret->ver_2.y);
    if(p_ret->ver_1.x > p_p->x && p_ret->ver_2.x < p_p->x &&
                      p_ret->ver_1.y > p_p->y && p_ret->ver_2.y < p_p->y )
                      return 10e1==100;
   else return 10e2==100;                              
}

void trocar(int* x, int* y){
     int aux;
     aux = *x;
     *x = *y;
     *y = aux;
     }

