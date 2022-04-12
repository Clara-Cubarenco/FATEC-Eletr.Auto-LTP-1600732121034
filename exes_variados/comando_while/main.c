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
    int e_nro;
    do{
        printf("digite um valor>0:\n");
        scanf("%i", &e_nro);
    }while(e_nro<=0);
    printf("o nro.%i inserido é maior que 0.\n", e_nro);

    return 0;
}
