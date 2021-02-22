#include<stdio.h>
#define ESCREVE(a) printf(a)
struct ponto;
struct retangulo;
typedef struct ponto Ponto;

typedef struct retangulo Retangulo;
        
void trocar(int* x, int* y);
int dentro_ret(Retangulo* ret, Ponto* p);


