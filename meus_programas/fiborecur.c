#include<stdio.h>
 #include<conio.h>

//fibo(int r);
void fibo2(int ant, int prx, int* ctrl);
int main(){
     int r;
     printf("Digite o limite da serie:");
     scanf("%d",&r);

    printf("SERIE DE FIBONACCI: ");

    fibo2(0, 1, &r);
    getch();
}
/*
fibo(int r){
    static long int i=0,j=0,f;
    printf(" %ld",j);
    
    j = (j == 0) ? 1 : j;
    f=i+j;
    i=j;
    j=f;
    return (j == 0 || j == 1 || r > 0) ? fibo(--r) : 0;
}
*/
void fibo2(int ant, int prx, int* ctrl){
          printf(" %d ", ant);
          if(*ctrl > 1){
                (*ctrl)--;
                fibo2(prx, ant+prx, ctrl);
          }
}
