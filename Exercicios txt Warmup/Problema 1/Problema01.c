/* Problema 1

O Instituto Nacional de Meteorologia (INM) mede a quantidade de chuva em milímetros.
Devido a um acordo entre o INM e o Instituto Britânico (IB), será necessário fazer o envio das
informações brasileiras para Londres. Entretanto o IB utiliza como medida da quantidade de
chuva a polegada.
Você foi requisitado para escrever um programa que leia a quantidade de chuva em
milímetros e dê a informação em polegadas. Isso não é problema para você, pois como
sabemos você é o analista programador do INM e há muito tempo sabe que uma polegada
equivale a 25.4 milímetros.

Entrada
Seu programa receberá como entrada um arquivo texto chamado chuva.in. Neste arquivo são
dados vários casos de entradas. Cada caso de entrada está em uma linha do arquivo e contem
a informação da quantidade de chuva em milímetros.

Saída
Para cada caso de entrada (linha) seu programa deverá imprimir em tela o valor
correspondente em polegadas. Cada valor convertido deve estar em uma linha. Não deixe
linhas em branco na tela e nem exiba dados além do pedido! */

#include <stdio.h>
#include <locale.h>

void mmToPl(float pmm) {
	float pl;
	//está parte transforma em polegadas
	printf("%.2f\n", pl=pmm/25.4);
}

void main () {
	setlocale(LC_ALL,"");
	
	float mm;
	
	FILE* arq;
	arq = fopen ("chuva.in.txt", "r");

	while (!feof(arq)) {
		fscanf(arq, "%f\n", &mm);
		printf("Valor em milímetros: %.1f\tValor Convertido: ", mm);
		mmToPl(mm);
	}
	
	fclose(arq);
	getchar();		
}
