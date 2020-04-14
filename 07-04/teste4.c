#include <stdio.h>
/*1. Criar uma variável de controle CONTADOR;
2. Criar uma variável para controle do cálculo FATORIAL que apresentará o resultado;*/
main()
{
	int cont, fat ;
	
	fat = 1;
	
	for (cont = 1 ; cont <=5 ; cont++)	
	{
		
		fat = fat * cont;
	
	}
	
	printf ("Fatorial de 5 = %d \n ", fat);
	
	/*PROGRAMA para apresentar na tela a TABELA ASCII*/
	
	int i;
	
		system("cls"); // CLS = CLear Screen = Limpar a tela - Apaga os dados que estiverem na tela
		
		for (i = 0; i < 256; i++)
		
		printf("%d = %c \n ", i, i);
		
		// OBS: Variável i será apresentada com formato Número (%d) e Caractere (%c)
		
		/* SEQUÊNCIA DE FIBONACCI: 1, 1, 2, 3, 5, 8, 13, 21, 34,*/
		int a = 0, b = 0, c = 0, cont;
		
		a = 1;
		
		for (cont = 1; cont <= 15; cont++)
		{
			c = a + b;
			
			printf("%d \n", c);
			
			a = b;
			
			b = c; 
		}	

/*TABUADA DE UM NÚMERO DIGITADO PELO USUÁRIO*/
	int tab, cont, res;
	
	printf ("Digite um numero: ");
	
	scanf("%d", &tab);
	
	for (cont = 1; cont <= 10; cont++)
	{
		res = tab * cont;
		
		//printf ("%d \n",res);
		printf ("%d x %d = %d \n", tab, cont, res);
	}

/* 1) Apresente apenas os números pares de 80 a 200 (ordem crescente) pag52*/
	int cont;
		
	for (cont = 80; cont <= 200; cont = cont+2 //cont +=2)
	{
		printf ("%d \n",cont);
	}

/* 2) Apresente apenas os números ímpares de 0 a 20 (ordem decrescente) pag52*/
    int cont;
		
	for (cont = 19; cont >= 1; cont = cont-2)
	{
		printf ("%d \n",cont);
	}

/* 3) Apresente apenas os múltiplos de 5 dos números de 0 a 100 pag52*/
    int cont;
		
	for (cont = 0; cont <= 100; cont = cont+5)
	{
		printf ("%d \n",cont);
	}

/* 4) Apresentar a Soma de todos os números ímpares de 0 a 10 pag52*/
	int cont, soma = 0;
		
	for (cont = 1; cont <= 9; cont = cont+2)
	{
		soma = soma + cont;
	
	}
	printf ("%d \n",soma);
}
