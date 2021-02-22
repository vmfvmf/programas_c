#include<stdio.h>
#include<locale.h>

void main(void){
     struct lconv l;
     
     l = *localeconv();
     printf("simbolo decimal eh: %s\n", l.decimal_point);
     getch();
}
