#include <stdio.h>

int main(){
	float nota1, nota2, nota3, media;

	//Mostra mensagem solicitando a primeira nota
	printf("\nDigite a primeira nota: ");
	//Recebe o valor da primeira nota
	scanf("%f%*c",& nota1);
	//Mostra mensagem solicitando a segunda nota
	printf( "\nDigite a segunda nota: ");
	//Recebe o valor da segunda nota
	scanf("%f%*c",& nota2);
	//Mostra mensagem solicitando a terceira nota
	printf( "\nDigite a terceira nota: ");
	//Recebe o valor da terceira nota
	scanf("%f%*c",& nota3);
	//Calcula média aritmética
	media = (nota1 + nota2 + nota3) / 3;
	//Mostra a m�dia obtida
	printf( "\nMédia aritmética: %f", media);

	//Mostra situação equivalente a média obtida
	if (media >= 0 && media < 3)
		printf(  "\nReprovado");
	if (media >= 3 && media < 7){
		printf( "\nExame ");
	}
	if (media >= 7 && media < 10)
		printf( "\nAprovado");
	//Para o programa a espera de um ENTER
	getchar();

	return 0;
}
