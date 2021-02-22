#include<dos.h>

set_mode(char mode)
{
 union _REGS in, out;
 
 in.h.al = mode;
 in.h.ah = 0;
 
 _int86(0x10, &in, &out);
}
