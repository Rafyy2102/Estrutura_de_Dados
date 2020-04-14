#include <stdio.h>
main(){
	
	int A, B, S, resp;
	
	resp = 1;
	
	while (resp == 1)	{
		
		printf("\n\nInforme o valor de A: ");
		scanf("%d", &A);
		
		printf("Informe o valor de B: ");
		scanf("%d", &B);
		
		S = A + B;
		
		printf("\nResultado: %d", S);
		
		printf("\nDeseja continuar? (1=SIM / 2=NAO): ");
		scanf("%d",&resp);
	}
}
