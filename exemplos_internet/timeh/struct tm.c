#include<stdio.h>
#include<time.h>

int main(void){
       struct tm *local, *gm;
       time_t t = time(NULL);
       local = localtime(&t);
       printf("Hora local e a data: %s\n", asctime(local));
       gm = gmtime(&t);
       printf("Hora universal e data: %s", asctime(gm));
       system("pause");
       
}
