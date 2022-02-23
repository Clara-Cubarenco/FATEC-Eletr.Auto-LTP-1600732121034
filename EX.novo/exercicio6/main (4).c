/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_tensao, e_corrente, s_resistencia;
    scanf("%f", &e_tensao);
    scanf("%f", &e_corrente);
    s_resistencia = e_tensao / e_corrente;
    printf("%.2f\n", s_resistencia);
    return 0;
}