#include<stdio.h>
#include<conio.h>

main(){
       int x=0;
       do{
          printf("digite um numero: ");
          }while(!scanf("%d",&x));
       printf("numero digitado: %d\nNumero B16: %X\nNumero B8: %o",x,x,x);
       getch();
}
