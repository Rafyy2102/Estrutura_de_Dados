#include <stdio.h>
//biblioteca para chamar a linguagem portugues
#include <locale.h>
	/*4)Elaborar um programa que calcule e apresente o 
	volume de uma caixa rearangular, por meio da fórmula: 
	Volume<- compimento*largura*altura.obs.: Utilizar número reais*/
main(){
	float V, C, L, A;
	//para colocar a ligua portugues e colocar sempre primeiro do print
	setlocale(LC_ALL,"Portuguese");
	printf("Entre com valor do comprimento: ");
	scanf("%f", &C);
	printf("Entre com valor da largura: ");
	scanf("%f", &L);
	printf("Entre com valor da altura: ");
	scanf("%f", &A);
	V = C * L * A;
	printf("O Valor do volume é: %f", V);
}
