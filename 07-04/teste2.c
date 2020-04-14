#include <stdio.h>
main(){
	
	int n1, n2, soma, resp;
	
	resp = 1;
	
	while(resp == 1){
		
		printf("\n\nSOMA - LOOP USUARIO\n");
		printf("\nDigite Primeiro Valor Inteiro: ");
		
		scanf("%d",&n1);
		printf("Digite Segundo Valor Inteiro: ");
		
		scanf("%d",&n2);
		
		soma = n1 + n2;
		
		printf("\nSOMA=> %d\n",soma);
		
		printf("\nDeseja continuar? (1=SIM / 2=NAO): ");
		
		scanf("%d",&resp);
		
			while((resp!=1) && (resp!=2)) // =! Corresponde a Diferente e && Operador E
			{
				printf("\n\n ==>>> ATENCAO: Digite 1 para SIM ou 2 para NAO\n\n");
				scanf("%d",&resp);
			}
	}

}
