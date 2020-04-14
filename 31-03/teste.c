#include <stdio.h>
#include <locale.h>
/*
pagina 42 a 43 
1. O teste de verificação será executado no início;
2. As instruções a seguir serão executadas enquanto a condições for verdadeira;
3. Se de inicio a condição for falsa, as instruções a seguir não serão executadas e o looping será finalizado.
Segue exemplo:
- Receber um valor;
- Multiplicá-lo por 3 e apresentar o resultado;
- Repetir o processo 5 vezes

pagina 44 exericios: 1) ao 5)
*/
main()
{
	  
	setlocale(LC_ALL,"Portuguese");
 	/*int x, r, cont//cont=1;

	cont = 1;

	while (cont <= 5)
		{
		printf ("\nDigite um valor: ");
		scanf ( "%d", &x);
		r = x * 3;
		printf ("\nO triplo do valor é: %d \n", r);
		cont = cont + 1; // pode ser usado cont++;
		}*/
		
		/*1)Apresente o seu nome 10 vezes na tela*/
		/*int cont;
		
		cont = 1;
		
		while (cont <= 10)
		{
		 	printf ("\nRafa ");
			cont = cont+1;
		}*/
		/*2) Apresente na tela os números entre 0 e 20*/
		int cont;
		
		cont = 0;
		
		while (cont <= 20)
		{
		 	printf ("%d\n ", cont);
		 	
			cont = cont+1;
		}
		
		/*3) Apresente apenas os números pares entre 0 e 100 (ordem crescente)*/
		int cont;
		
		cont = 0;
		
		while (cont % 2 == 0)
		{
		 	printf ("%d \n", cont);
		 	
			cont = cont+1;
		}
		
		{
		int cont;
		
		cont = 0;
		
		while (cont <= 10)
		{
			printf ( "%d\n", cont);
			cont = cont + 2;
		}
		
		/*4) Apresente apenas os números ímpares entre 0 e 100 (ordem decrescente) */
		
			int cont, A, B, C, M;
		
		cont = 1;
		
		while (cont <= 3)
		{
		 	printf ("%d \n", cont);
		 	
			cont = cont - 2;
		}
		
		/* 5) Ler valores para A, B e C „³ Calcular e Apresentar a Media ,³ Repetir o processo 3 vezes*/
			int cont;
		
		cont = 99;
		
		while (cont >= 1)
		{
		 	printf ("Digite valor para A:  ");
		 	scanf ("%d",&A);
	 		
	 		printf ("Digite valor para B: ");
		 	scanf ("%d",&B);
		 	
	 		printf ("Digite valor para C:  ");
		 	scanf ("%d",&C);
		 	
		 	M= (A+B+C)/3;
		 	
		 	printf("A media é: %d\n\n", M);
		 	
			cont = cont +1;
		}

}

