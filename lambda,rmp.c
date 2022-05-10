/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float s_saida[4][5]={{0.0,0.5,1.2,1.3,1.4},
        {0.0,0.7,1.7,1.8,2.3},
        {0.0,0.8,1.9,2.0,4.0},
        {0.0,1.0,2.0,2.2,5.0}};
    int p_rmp[5]={0,1000,2000,3000,4000};
    float p_lambda[4]={0.1,0.2,0.3,0.4};
    float e_lambda;
    int e_rmp,v_var,v_rpm_pos,v_lambda_pos;
    printf("entre com o valor da rotacao[RPM]:");
    scanf("%i",&e_rmp);
    printf("entre com o valor da sonda lambda[v]:");
    scanf("%f",&e_lambda);
    v_rpm_pos=0;
    v_var=0;
    while((p_rmp[v_var]<=e_rmp)&&(v_var<5)){
        v_rpm_pos+v_var;
    }
    v_lambda_pos=0;
    v_var=0;
    while((p_lambda[v_var]<=e_lambda)&&(v_var<4)){
        v_lambda_pos=v_var;
    }
    printf("o valor:%.2f\n", s_saida[v_lambda_pos][v_rpm_pos]);
    

    return 0;
}
