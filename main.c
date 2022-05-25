#include <stdio.h>
#define MAX 50

int main()
{
    int decimal, binario, octal, hexadecimal, opcao;
    
    printf("Bem vindo\n\n1-Decimal para binário\n2- Decimal para hexadecimal\n3-Decimal para octal\n \n");
    printf("De acordo com a lista acima, selecione o metodo de converção desejado:");
    scanf("%i", & opcao);
    
    if(opcao == 1){
        
        int num;
    	printf("\nEscreva um número em decimal:");
    	scanf("%i",& num);
    	int vet_bin[MAX];
    	int i = 0, j;
    	int aux_num = num;
    
    	while(num > 0)
    	{
    		vet_bin[i] = num % 2;
    		i++;
    		num = num / 2;
    	}
    
    	printf("%d em binario: ", aux_num);
    
    	for(j = i - 1; j >= 0; j--)
    		printf("%d", vet_bin[j]);
            printf("\n");

    	return 0;
    }

    if(opcao == 2){

    }

    if(opcao == 3){
        
        int num;
    	printf("\nEscreva um número em decimal:");
    	scanf("%i",& num);
    	int vet_bin[MAX];
    	int i = 0, j;
    	int aux_num = num;
    
    	while(num > 0)
    	{
    		vet_bin[i] = num % 2;
    		i++;
    		num = num / 8;
    	}
    
    	printf("%d em binario: ", aux_num);
    
    	for(j = i - 1; j >= 0; j--)
    		printf("%d", vet_bin[j]);
            printf("\n");

    	return 0;
    }

    return 0;
}
