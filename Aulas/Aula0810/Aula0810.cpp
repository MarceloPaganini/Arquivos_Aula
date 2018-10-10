// Aula0810.cpp : Defines the entry point for the console application.
//

/* comentario longo, bloco
(mais de uma linha)
*/

#include "stdafx.h"  // inclusão de biblioteca
// C ANSI
#include "stdio.h"
#include "stdlib.h"

// Variaveis (Globais visiveis em todo o codigo)

int a; // inteiro
float b; // real (ponto flutuante)
double c; // real (maior precisao)
bool d; // booleano (verdadeiro/falso) (true/false)


int main()
{
	// variavel local
	//(visivel somente nesta função, a partir dessa linha)
	int e;
	
	// n pula linha
	// \t tabulação
	
	printf("Hello World!\n\n\n");
		
	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");

	printf("\n");


	// como imprimir valores

	printf("%i\n", 99);
	printf("%f\n", 100.01);

	// texto (string) e valores juntos

	printf("Aqui vai o valor %i, total da soma.\n", 98 + 5);

	printf("%i + %i = %i\n", 500, 600, 500 + 600);


	printf("Por algum acaso esqueci o valor aqui: %i\n");

	a = 150;
	e = 275;

	int f = a + e;

	printf("O resultado eh: %i\n", f);

	// Leitura SCANF / SCANF_S

	scanf_s("%i", &f);

	printf("\nVoce digitou %i\n", f); // verificação

	
	printf("Digite um valor real (flot): ");

	scanf_s("%f", &b);

	printf("\nVoce digitou %f\n", b);


	system("pause");





    return 0;
}

