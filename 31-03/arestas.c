#include <stdio.h>
#include <locale.h>
/*pagina35 3) Ler a quantidade de arestas
Apresentar a quantidade de arestas digitada com a mensagem correspondente:
< 3 - N�o � Figura Geom�trica = 3 - � um triangulo > 3 - N�o � um triangulo*/
main()
{
	int A;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a quantidade de arestas: \n");
	scanf("%d", &A);
	
	if(A < 3)
		printf("N�o � uma figura geometrica\n");
	else
	{
		if (A == 3)
		printf("E um triangulo\n");
		else
		printf("N�o � um triangulo\n");
	}
	
}
