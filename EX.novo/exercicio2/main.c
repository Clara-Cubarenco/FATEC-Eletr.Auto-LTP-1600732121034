/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_Prova1, e_Prova2, e_Atividade, s_media;
    printf("Notas parciais:");
    scanf("%f", &e_Prova1);
    scanf("%f", &e_Prova2);
    scanf("%f", &e_Atividade);
    s_media = (e_Prova1 * 0.3) + (e_Prova2 * 0.5) + (e_Atividade * 0.2);
    printf ( " %.2f \n " , s_media);
    if(s_media<6)
    {
    printf("%f Reprovado",s_media);
    }else{
    printf("%f Aprovado",s_media);
}


    return 0;
}
