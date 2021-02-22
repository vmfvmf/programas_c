#include<stdio.h>

int num(void);
int inc(void);

main(){
       int i;
       char ch = read_modem(); 
       for(i = 0; i < 100; i++){
             printf("%d",num());
             putchar('v');
             }
       printf("\n\n%c\n\n",ch);
       system("pause");
       
}


int num(void){
    static int nume = 5;
    return nume++;
}
