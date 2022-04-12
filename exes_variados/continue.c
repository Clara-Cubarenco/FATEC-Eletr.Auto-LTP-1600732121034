/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int e_nro;
   do{
        printf("entre com o numero:\n");
        scanf("%i", &e_nro);
        if(e_nro<0){
            continue;
        }
        
    printf("%i\n",e_nro);
    }while(e_nro!=0);
    printf("fim\n");
    return 0;
}
