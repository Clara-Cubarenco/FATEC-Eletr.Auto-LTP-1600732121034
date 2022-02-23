/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_metros_por_segundo, s_quilometros_por_hora;
    scanf("%f", &e_metros_por_segundo);
    s_quilometros_por_hora = 3.6 * e_metros_por_segundo;
    printf("%.2f\n", s_quilometros_por_hora);
    return 0;
}