#include<dos.h>
#include<stdio.h>


void main(void){
     union _REGS in, out;
     
     in.h.ah = 0x2c; /* num da func q obtem o horario /*/
     intdos(&in, &out);
     
     printf("hora eh: %.2d:%.2d:%.2d", out.h.ch, out.h.cl, out.h.dh
     getch(););
}
