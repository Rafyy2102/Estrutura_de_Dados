#include <stdio.h>
#include <locale.h>
/*pagina 34 salario at� 1045 deconto de 8% acima 11%*/
main()
{
	float SalarioLiquido, TOTAL;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Sal�rio do funcion�rio �: ");
	scanf("%f", &SalarioLiquido);
		
	TOTAL = SalarioLiquido - SalarioLiquido  ;
	
	
	if(SalarioLiquido == 1045)
	
	
		TOTAL = SalarioLiquido -(SalarioLiquido * 0.08);

	else
	
	
		TOTAL = SalarioLiquido -(SalarioLiquido * 0.11);

	printf("valor %f", TOTAL);
	
	
}




