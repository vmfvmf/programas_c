#include<stdio.h>

main(){
       int i;
       char ch = 7; 
       for(i = 0; i < 100; i++){
             if(i%2==0)ch=ch>>1;
             else ch=ch&2;
             printf("\t%c",ch);
             if(i==5)ch=~ch;
             if(i==10)ch=ch|2;
             if(i==50)ch&2;
             }
       system("pause");
       
}
