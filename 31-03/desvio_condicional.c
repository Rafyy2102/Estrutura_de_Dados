#include <stdio.h>
#include <locale.h>
/*pagina 34 DESVIO CONDICIONAL ENCADEADO ou ANINHADO*/
main()
{
int I, S;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o Sexo (1 - Feminino ou 2 - Masculino): ");
	scanf("%d", &S);
	printf("Digite a Idade:");
	scanf ("%d", &I);
	if (S == 1)
	{
		if (I>25)
		printf("50%% Desconto\n");
		else
		printf("Entrada VIP\n");
	}
	else
	{
		if (I>30)
		printf("10%% Desconto\n");
		else
		printf("20%% Desconto\n");
	}
system("pause");
}
