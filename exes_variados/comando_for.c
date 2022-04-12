/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declaracao de variaveis
    int e_nro, e_aux;
    printf("digite um valor de n:\n");
    scanf("%i", &e_nro);
    for(e_aux=0;e_aux<=e_nro;e_aux++)
    {
        printf("%d\n", e_aux);
    }

    return 0;
}
