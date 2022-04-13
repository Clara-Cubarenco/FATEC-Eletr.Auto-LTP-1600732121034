/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int e_nro, resto,quociente,cont,temp;
    int s0,s1,s2,s3,s4,s5,s6,s7,s8,s9;
    printf("insira o numero decimal entre 0 a 1023:");
    scanf("%i", &e_nro);
    quociente=e_nro;
    cont=0;
    while(quociente>1){
        resto=quociente%2;
        quociente=quociente/2;
        switch(cont){
            case 0 :s0=resto; break;
            case 1 :s1=resto; break;
            case 2 :s2=resto; break;
            case 3 :s3=resto; break;
            case 4 :s4=resto; break;
            case 5 :s5=resto; break;
            case 6 :s6=resto; break;
            case 7 :s7=resto; break;
            case 8 :s8=resto; break;
            case 9 :s9=resto; break;
        }
        cont++;
    }
    printf("EM BINARIO:%i", quociente);
    for(temp=cont-1; temp>=0;temp--){
        switch(temp){
            case 0 : printf("%i", s0);break;
            case 1 : printf("%i", s1);break;
            case 2 : printf("%i", s2);break;
            case 3 : printf("%i", s3);break; 
            case 4 : printf("%i", s4);break;
            case 5 : printf("%i", s5);break;
            case 6 : printf("%i", s6);break;
            case 7 : printf("%i", s7);break;
            case 8 : printf("%i", s8);break;
            case 9 : printf("%i", s9);break;
            
        }

    
}
    return 0;
}
