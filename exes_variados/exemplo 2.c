/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declaracao de variavel
   int valor_aux, e_nro, s_fatorial;
   valor_aux=0;
   s_fatorial=1;
   scanf("%d", &e_nro);
   while(valor_aux<=e_nro){
     
       if(valor_aux>1){
       s_fatorial=s_fatorial*valor_aux;
       }
           (valor_aux=valor_aux+1);
       
    }
    printf("%d",s_fatorial);
    return 0;
}

