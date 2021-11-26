/* Problema 2
A concession�ria de ve�culos Tremend�o paga a seus funcion�rios um sal�rio fixo
mais uma comiss�o de R$ 200,00 por cada carro vendido. No final do m�s os 
sal�rios s�o calculados pelo setor financeiro e eles n�o ag�entam mais fazer estas contas na m�o.
Voc� acabou de ser contratado como programador da concession�ria e seu primeiro
trabalho � automatizar estes c�lculos. Para isso, utilize os dados do sal�rio fixo
e a quantidade de carros vendidos para calcular a folha de pagamento da empresa.

Entrada
Seu programa receber� como entrada um arquivo texto chamado vendidos.in. Neste
arquivo s�o dados v�rios conjuntos de entradas. Cada conjunto de entradas est�
em uma linha do arquivo e contem as informa��es sobre os funcion�rios
na seguinte ordem: nome, sal�rio fixo e quantidade de carros vendidos.

Sa�da
Para cada caso de entrada (linha) seu programa dever� imprimir em tela o nome
e o sal�rio do funcion�rio. Cada linha de entrada resultar� em uma linha
de sa�da. N�o deixe linhas em branco na tela e nem exiba dados al�m do pedido! */

#include <locale.h>
#include <stdio.h>

typedef struct {
	int qtd;
	float salario;
	char nome[20];
}func;

float calcularSalario (func pvend) {
	float total;
	total=pvend.salario+pvend.qtd*200;
	return total;
}

void main () {
	setlocale (LC_ALL,"");
	
	int i=0;
	
	func vendedor[3];
	
	FILE* arq;
	arq = fopen("vendidos.in.txt", "r");
	
	i=0;
	while (!feof(arq)) {
		fscanf(arq, "%s %f %i\n", vendedor[i].nome, &vendedor[i].salario, &vendedor[i].qtd);
		i++;
	}
	fclose(arq);

	
	for (i=0;i<3;i++) {
		vendedor[i].salario=calcularSalario(vendedor[i]);
		printf("%s\t %.2f\n", vendedor[i].nome, vendedor[i].salario);
	}
	getchar();
}
