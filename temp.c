/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor_aux_linha, valor_aux_coluna;
    float e_valor[4][5]={{0.0,0.5,1.2,1.3,1.4},
        {0.0,0.7,1.7,1.8,2.3},
        {0.0,0.8,1.9,2.0,4.0},
        {0.0,1.0,2.0,2.2,5.0}};
    int p_rpm[5]={0,1000,2000,3000,4000};
    float p_lambda[4]={0.1,0.2,0.3,0.4};
    float e_tempo;
    int s_rpm,v_var,s_lambda;
    printf("entre com o tempo[seg]:");
    scanf("%f",&e_tempo);
    
    for(valor_aux_linha=0;valor_aux_linha<4;
    valor_aux_linha++)
    {
        for(valor_aux_coluna=0;valor_aux_coluna<5;valor_aux_coluna++)
        {
            if (e_valor[valor_aux_linha][valor_aux_coluna] == e_tempo){
             printf("lambda: %f ; rpm %i\n", p_lambda[valor_aux_linha], p_rpm[valor_aux_coluna]);
            }
        }
        //printf("\n");
    }
    

    return 0;
}
