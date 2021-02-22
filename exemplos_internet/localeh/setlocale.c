#include<stdio.h>
#include<locale.h>

void main(void){
     struct lconv l;
     char *s;
     l = *localeconv();
     printf("simbolo decimal eh: %s\n\n", l.decimal_point);
     
     s = setlocale(LC_NUMERIC, " ");
     printf("\n\n%.2f\n\n%s",50030.45,*s);
     getch();
}
