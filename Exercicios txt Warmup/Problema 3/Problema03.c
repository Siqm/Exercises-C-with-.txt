/*A empresa Tonho Eletronics criou uma m�quina capaz de fazer a convers�o
de n�meros decimais em n�meros bin�rios (eles querem ganhar dinheiro com
esta geringon�a!). Para os testes, os engenheiros confrontam os dados
gerados pela m�quina com convers�es realizadas na m�o.

A convers�o de um n�mero decimal para bin�rio pode ser realizada atrav�s
do m�todo da Divis�o Repetida. Neste m�todo fazemos a divis�o do n�mero
decimal por 2 at� que n�o seja mais poss�vel realizar a divis�o. O resultado
� obtido juntando o resultado da �ltima divis�o e o resto das divis�es
anteriores, que devem ser sempre 0 ou 1.

Voc� � um programador independente e foi contratado pela equipe da Tonho
Eletronics para criar um programa capaz de fazer a convers�o de decimal
para bin�rio. A id�ia deles � n�o precisar mais fazer os c�lculos na m�o.

Entrada
Seu programa receber� como entrada um arquivo texto chamado decimais.in. 
Neste arquivo s�o dados v�rios casos de entradas. Cada caso de entradas
est� em uma linha do arquivo e contem um n�mero inteiro (decimal).

Sa�da
Para cada caso de entrada (linha) seu programa dever� imprimir em tela 
o valor correspondente em bin�rio. Cada linha de entrada resultar� em
uma linha de sa�da. N�o deixe linhas em branco na tela e nem exiba dados al�m do pedido! */

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
