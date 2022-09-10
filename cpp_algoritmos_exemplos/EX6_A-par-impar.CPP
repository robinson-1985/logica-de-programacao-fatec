#include <stdio.h>

int main(){
	int num;
	//Mostra mensagem solicitando um n�mero
	printf( "\nDigite um número: ");
	//Recebe o número
	scanf("%d%*c",&num);
	if (num % 2 == 0)
		printf( "\nO n�mero � par");
	else
		printf( "\nO número é ímpar");

	return 0;

	getchar();
}
