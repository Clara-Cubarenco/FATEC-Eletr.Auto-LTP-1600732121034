/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float s_media,e_prova;
    int e_qtde, v_var;
    s_media=0;
    printf("insira as notas\n");
    scanf("%i", &e_qtde);
    for (v_var=0;v_var<e_qtde;v_var++){
        scanf("%f",&e_prova);
        s_media=s_media+e_prova;
    }
   s_media=s_media/e_qtde;
    printf("media:%.2f\n",s_media);

    return 0;
}
