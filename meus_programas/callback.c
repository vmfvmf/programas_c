#include<stdio.h>

int maior(int* a, int* b);
int menor(int* a, int* b);

int comparar(int* a, int* b, int(*mm)(int*, int*));

main(){
       int a, b;
       pega:
       printf("Digite um numero.:");
       scanf("%d", &a);
       printf("Digite outro numero.:");
       scanf("%d", &b);
       printf("maior %d",comparar(&a,&b,maior));
       printf("\n\nDeseja comparar outros numeros? (s/n)\n");
       if(getch()=='s') goto pega;
       system("pause");
}
int maior(int* a, int* b){
    return (*a>*b)?*a:*b;
}

int menor(int* a, int* b){
    return (*a<*b)?*a:*b;
}
int comparar(int *a, int *b, int(*mm)(int*, int*)){
    return mm(a,b);
}
