/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_resistencia_1, e_resistencia_2, s_resistencia_equivalente;
    scanf("%f", &e_resistencia_1);
    scanf("%f", &e_resistencia_2);
    s_resistencia_equivalente = 1/ (1/ e_resistencia_1 + 1 / e_resistencia_2);
    printf("%.2f\n", s_resistencia_equivalente);
    return 0;
}