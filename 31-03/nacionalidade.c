#include <stdio.h>
#include <locale.h>
/*digite 1 para brasil ou 2 fora do brasil 1=brasileiro 2=estrangeiro*/
main()
{
	int escolha;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite: \n1 - Brasil\n2 - Estrangeiro\n");
	scanf("%d", &escolha );
	
    
	if(escolha == 1)
 	   printf("Você é brasileiro\n", &escolha);
	
	else
	
		printf("Você é estrangeiro\n", &escolha);
	
}
