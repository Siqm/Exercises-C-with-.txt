/*A empresa Tonho Eletronics criou uma máquina capaz de fazer a conversão
de números decimais em números binários (eles querem ganhar dinheiro com
esta geringonça!). Para os testes, os engenheiros confrontam os dados
gerados pela máquina com conversões realizadas na mão.

A conversão de um número decimal para binário pode ser realizada através
do método da Divisão Repetida. Neste método fazemos a divisão do número
decimal por 2 até que não seja mais possível realizar a divisão. O resultado
é obtido juntando o resultado da última divisão e o resto das divisões
anteriores, que devem ser sempre 0 ou 1.

Você é um programador independente e foi contratado pela equipe da Tonho
Eletronics para criar um programa capaz de fazer a conversão de decimal
para binário. A idéia deles é não precisar mais fazer os cálculos na mão.

Entrada
Seu programa receberá como entrada um arquivo texto chamado decimais.in. 
Neste arquivo são dados vários casos de entradas. Cada caso de entradas
está em uma linha do arquivo e contem um número inteiro (decimal).

Saída
Para cada caso de entrada (linha) seu programa deverá imprimir em tela 
o valor correspondente em binário. Cada linha de entrada resultará em
uma linha de saída. Não deixe linhas em branco na tela e nem exiba dados além do pedido! */

#include <locale.h>
#include <stdio.h>

void decToBin (int pnum) {
	int bin[10], i=0;
	
	while (pnum!=0) {
		bin[i]=pnum%2;
		pnum=pnum/2;
		i++;
	}
		for(i-=1;i>=0;i--) {
		printf("%i", bin[i]);
	}
	printf("\n");
}

void main () {
	setlocale (LC_ALL,"");
	
	int num;
	
	FILE* arq;
	arq = fopen("decimais.in.txt", "r");
	
	while (!feof(arq)) {
		fscanf(arq, "%i\n", &num);
		printf("%i\t", num);
		decToBin(num);
	}
	fclose(arq);
	getchar();
}
