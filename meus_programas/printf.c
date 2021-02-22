#include<stdio.h>
#include<conio.h>

int sair(void);

main(){
       int x=0;
       char a;
       do{
           printf("%d",printf("%d",x++));
       }while(sair());
       
       do{
              printf("Tem certeza disso? (+/-)");
              getchar();
       }while(!scanf("%[+-]",&a));
       printf("saindo %c...",a);
       getch();
}

int sair(void){
    printf("deseja continuar? (s/n)");
    if(toupper(getch())=='N') return printf("");
    else return printf("\n");
}
