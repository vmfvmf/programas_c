#include<stdio.h>

int maior(int* a, int* b);
int menor(int* a, int* b);

int compara(int (*mm)(int*, int*));

main(){
       int a, b, maior;
       printf("Digite um numero.:");
       scanf("%d", &a);
       printf("Digite outro numero.:");
       scanf("%d", &b);
       maior = compara(maior(&a,&b));
       system("pause");
}
int maior(int* a, int* b){
    return (*a>*b)?*a:*b;
}

int menor(int* a, int* b){
    return (*a<*b)?*a:*b;
}
int compara(int *a, int *b,int (*mm)(int*, int*)){
    return mm(a,b);
}
