#include <stdio.h>
#include <locale.h>
/*pagina35 3) Ler a quantidade de arestas
Apresentar a quantidade de arestas digitada com a mensagem correspondente:
< 3 - Não é Figura Geométrica = 3 - É um triangulo > 3 - Não é um triangulo*/
main()
{
	int A;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a quantidade de arestas: \n");
	scanf("%d", &A);
	
	if(A < 3)
		printf("Não é uma figura geometrica\n");
	else
	{
		if (A == 3)
		printf("E um triangulo\n");
		else
		printf("Não é um triangulo\n");
	}
	
}
