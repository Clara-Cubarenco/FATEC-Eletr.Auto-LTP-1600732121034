/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int e_sair;
    while(1){
        printf("tecle 0 para sair:");
        scanf("%i", &e_sair);
        if(e_sair==0){
            break;
        }
    }
    printf("fim\n");
   
    return 0;
}
