/* Problema 1

O Instituto Nacional de Meteorologia (INM) mede a quantidade de chuva em mil�metros.
Devido a um acordo entre o INM e o Instituto Brit�nico (IB), ser� necess�rio fazer o envio das
informa��es brasileiras para Londres. Entretanto o IB utiliza como medida da quantidade de
chuva a polegada.
Voc� foi requisitado para escrever um programa que leia a quantidade de chuva em
mil�metros e d� a informa��o em polegadas. Isso n�o � problema para voc�, pois como
sabemos voc� � o analista programador do INM e h� muito tempo sabe que uma polegada
equivale a 25.4 mil�metros.

Entrada
Seu programa receber� como entrada um arquivo texto chamado chuva.in. Neste arquivo s�o
dados v�rios casos de entradas. Cada caso de entrada est� em uma linha do arquivo e contem
a informa��o da quantidade de chuva em mil�metros.

Sa�da
Para cada caso de entrada (linha) seu programa dever� imprimir em tela o valor
correspondente em polegadas. Cada valor convertido deve estar em uma linha. N�o deixe
linhas em branco na tela e nem exiba dados al�m do pedido! */

#include <stdio.h>
#include <locale.h>

void mmToPl(float pmm) {
	float pl;
	//est� parte transforma em polegadas
	printf("%.2f\n", pl=pmm/25.4);
}

void main () {
	setlocale(LC_ALL,"");
	
	float mm;
	
	FILE* arq;
	arq = fopen ("chuva.in.txt", "r");

	while (!feof(arq)) {
		fscanf(arq, "%f\n", &mm);
		printf("Valor em mil�metros: %.1f\tValor Convertido: ", mm);
		mmToPl(mm);
	}
	
	fclose(arq);
	getchar();		
}
