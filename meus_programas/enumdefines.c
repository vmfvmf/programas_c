#include<stdio.h>
#include<conio.h>
#define junta(s1,s2) s1 ## s2
#define escreve(s) # s

enum semana{
     domingo = 1,
     segunda,
     terca,
     quarta,
     quinta, 
     sexta,
     sabado};
typedef enum semana Semana;

main(){
     Semana sem=domingo;
     printf("%d",escreve(sem));
     getch();
     }
