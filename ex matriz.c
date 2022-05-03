/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int e_qtde, v_var;
    scanf("%i", &e_qtde);
    float s_media,e_prova[e_qtde];
    s_media=0;
    for (v_var=0;v_var<e_qtde;v_var++){
        scanf("%f",&e_prova[v_var]);
    }
    for(v_var=0;v_var<e_qtde;v_var++){
        s_media=s_media+e_prova[v_var];
    }
    s_media=s_media/e_qtde;
    printf("media:%.2f\n",s_media);

    return 0;
}
