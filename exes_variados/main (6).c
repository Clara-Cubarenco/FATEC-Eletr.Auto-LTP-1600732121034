/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char e_op;
    float e_numero_1 , e_numero_2, s_resultado;
    printf("entre com o numero 1:");
    scanf("%f", &e_numero_1);
    printf("entre com a operacao (+,-,* ou /):");
    scanf("%c", &e_op);
    scanf("%c", &e_op);
    printf("entre com o numero 2:");
    scanf("%f", &e_numero_2);
    switch(e_op)
    {
    case'+': s_resultado=e_numero_1+e_numero_2;
    break;
    case'-': s_resultado=e_numero_1-e_numero_2;
    break;
    case'*': s_resultado=e_numero_1*e_numero_2;
    break;
    case'/':if(e_numero_2!=0) 
    s_resultado=e_numero_1/e_numero_2;
    break;
    }
    switch(e_op)
    {
    case'+': case'-':
    case'*': printf("s+%f\n",s_resultado);
    break;
    case'/':
    if((e_numero_2==0))
    {printf("erro");
    }
    else
    {
    printf("s=%f",s_resultado);
    }
    break;
    default:
    printf("erro de operacao");
    }
    
    return 0;
}
