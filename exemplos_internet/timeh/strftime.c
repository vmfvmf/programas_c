#include<stdio.h>
#include<time.h>

int main(void){
       char s[50];
       struct tm t;
       time_t t_of_day;
       
       t.tm_year       = 86;
       t.tm_mon        = 2;
       t.tm_mday       = 3;
       t.tm_hour       = 6;
       t.tm_min        = 50;
       t.tm_sec        = 55;
       t.tm_isdst      = 0;
       
       strftime(s, 60, "Agora sao %I:%M:%S %p de %d/%m/%y",&t);
       
       printf("%s\n",s);
       system("pause");
       
}
