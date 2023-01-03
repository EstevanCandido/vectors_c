#include <stdio.h>
#include <stdlib.h>

//#define N 	10
/* ===================================================================== */
/* --- Macros --- */

/* ===================================================================== */
/* --- Protótipo das funções --- */

/* ===================================================================== */
/* --- Função Principal --- */

main ()
{
	float ValorAcao[N];
	int qtd[N];
	float aporte, soma=0.0;
	int i;
	
	printf("Defina o valor do seu aporte R$: ");
	scanf("%f", &N);
	
	printf("Defina o valor do seu aporte R$: ");
	scanf("%f", &aporte);
	
	for(i=0;i<N;i++)
	{
		printf("Digite os valores das acoes e suas qtd respectivamente (R$): ");
		scanf("%f %d", &ValorAcao[i], &qtd[i] );
		soma+=(ValorAcao[i]*qtd[i]);
	}
	
	if(soma>aporte)
	{
		printf("Valor que se deseja aplicar = %.2f\n", soma);
		printf("Seu aporte e menor que o valor que se deseja aplicar! Aumente seu aporte em %.2f!\n", soma-aporte);
	}
	
	
	system("PAUSE");
	return 0;
} //end main

/* ===================================================================== */
/* --- Desenvolvimento das funções --- */
