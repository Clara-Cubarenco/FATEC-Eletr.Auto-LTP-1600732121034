/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_valor_1, e_valor_2;
    printf("entre com os valores:");
    scanf("%f",& e_valor_1);
    scanf("%f",& e_valor_2);
    if(e_valor_1<e_valor_2)
    {
    printf("%f maior valor",e_valor_2);
    }
    else
    {
    printf("%f maior valor", e_valor_1);
    }

    return 0;
}
