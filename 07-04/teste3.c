#include <stdio.h>

/*- Receber valor
- Calcular o quadrado dele
- Mostrar o resultado
- Repetir esse processo 5 vezes*/

main(){
	
	int x, r, cont;
	
	cont = 1;
	
	do { // Observe sequência {entre chaves}
	
		printf ("Digite um número para saber o quadrado dele: ");
		
		scanf("%d",&x);
		
		r = x * x;
		
		printf ("O quadrado e: %d \n", r);
		
		cont = cont+1;
	
	} while (cont <= 5); // Observe aqui o uso do ponto e vírgula
	
	/* 1) Apresentar apenas os números pares de 10 a 20 (ordem crescente) pag49-50*/
	int cont;
	
	cont = 10;
	
	do{
		
		printf("%d \n", cont);
		
		cont = cont + 2;
		
	}while(cont <= 20);
		
   /*2) Apresentar apenas os números ímpares de 30 a 50 (ordem decrescente) pag49-50*/
   	int cont;
	
	cont = 49;
	
	do{
		
		printf("%d \n", cont);
		
		cont = cont - 2;
		
	}while(cont >= 31);
   
    
   /*3) Apresentar apenas os múltiplos de 3 dos números de 0 a 50 pag49-50*/
   
   int cont;
	
	cont = 0;
	
	do{
		
		printf("%d \n", cont);
		
		cont = cont + 3;
		
	}while(cont <= 50);
   
   
   /*4) Ler A, B e C / Calcular e Apresentar a Média / Executar esse processo 5x pag49-50*/
   
   int cont, A, B, C, M;
	
	cont = 1;
	
	do{
		printf("\nDigite o valor de A: ");
		scanf("%d", &A);
		
		printf("\nDigite o valor de B: ");
		scanf("%d", &B);
		
		printf("\nDigite o valor de C: ");
		scanf("%d", &C);
		
		M= (A + B + C) /3;
		printf(" A media e: %d \n", M);
		
		cont = cont + 1;
		
	}while(cont <= 5);
   
   
   /*5) Apresentar os quadrados de todos os numeros inteiros de 15 a 31->15 = 225 ... 31 = 961 pag49-50*/
   
   int cont, Q;
	
	cont = 15;
	
	do{
		Q = cont * cont;
		
		printf("O quadrado de %d e: %d\n", cont, Q);
		
		cont = cont + 1; 
		
	} while (cont <= 31);	

}

