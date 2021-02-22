#include<stdarg.h>
#define ESCREVE(a, b) printf(a, b)
#define LEIA(a,b) scanf(a,b)
main(){
       float a;
       ESCREVE("a%d%",14);
       getch();
       printf("digite a");
       LEIA("%f",&a);
       printf("%.2f",a);
       getch();
       }
