#include<stdio.h>
#include<time.h>

int main(void){
       struct tm t;
       time_t t_of_day;
       
       t.tm_year       = 86;
       t.tm_mon        = 2;
       t.tm_mday       = 3;
       t.tm_hour       = 6;
       t.tm_min        = 50;
       t.tm_sec        = 55;
       t.tm_isdst      = 0;
       
       t_of_day = mktime(&t);
       printf(ctime(&t_of_day));
       system("pause");
       
}
