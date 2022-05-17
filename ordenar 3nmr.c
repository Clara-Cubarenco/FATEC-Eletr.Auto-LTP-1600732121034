/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nro[3];
    int v_var,v_tmp,v_cont;
    v_var = 0;
    
    while(v_var<3){
        scanf("%f", &nro[v_var]);
        v_var++;
    }
    do{
        v_cont=0;
        v_var=1;
        while(v_var<3){
            if(nro[v_var-1]>nro[v_var]){
                v_tmp=nro[v_var-1];
                nro[v_var-1]=nro[v_var];
                nro[v_var]=v_tmp;
                v_cont++;
            }
            v_var++;
            
        }
    
    }while(v_cont>0);
    v_var=0;
    while(v_var<3){
    printf("%.2f\n", nro[v_var]);
        v_var++;
    }
    

    return 0;
}
