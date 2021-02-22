#include<malloc.h>
#include<stdio.h>

main(void){
           char *str, ss, aux;
           int x;
           if(!(str = _alloca(80))){
                    printf("ERRO! FECHANDO!");
                    exit(1);
                    }
           //*str="\0";
           for(x=0;x<80;x++){
                             aux = (char)('A'+x);
                             strcat(str,&aux); 
                             }
           
           printf("%s",str);
           getch();
           }
