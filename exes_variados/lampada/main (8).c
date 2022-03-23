/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char e_interruptor, v_tempo;
    printf("lampada apagada\n");
    while(1){
    printf("a_aberto; f_fechado:\n");
    scanf("%c",&e_interruptor);
    scanf("%c",&v_tempo);
    switch(e_interruptor)
   {
       case'a':printf("apagado\n");
       break;
       case'f':printf("aceso\n");
       break;
   }
}
    return 0;
}
