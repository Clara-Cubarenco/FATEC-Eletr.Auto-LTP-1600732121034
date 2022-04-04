/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int e_numero;
    printf("Entre com o valor decimal:");
    scanf("%d", &e_numero);
    printf("Numero decimal: %d\t", e_numero); 
    printf("Numero octal: %o\t", e_numero);
    printf("Numero hexadecimal: %x\t", e_numero);

    return 0;
}
