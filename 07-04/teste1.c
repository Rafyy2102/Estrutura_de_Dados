#include <stdio.h>
main(){
	
	int A, B, S;
	
	char resp;
	
	resp = 'S'; // aspas simples para tipo char
	
	while (resp == 'S')
	// Também pode-se prever digitação de SIM com S maiúsculo ‘S’ OU minúsculo ‘s’:
	// while (resp=='S' || resp=='s')
	{
		printf("\n\nInforme o valor de A: ");
		scanf("%d", &A);
		
		printf("Informe o valor de B: ");
		scanf("%d", &B);
		
		S = A + B;
		
		printf("\nResultado: %d", S);
		printf("\nDeseja continuar? (S/N): ");
		
		scanf(" %c",&resp); //espaço antes %c
	}

}
