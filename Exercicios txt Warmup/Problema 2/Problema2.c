/* Problema 2
A concessionária de veículos Tremendão paga a seus funcionários um salário fixo
mais uma comissão de R$ 200,00 por cada carro vendido. No final do mês os 
salários são calculados pelo setor financeiro e eles não agüentam mais fazer estas contas na mão.
Você acabou de ser contratado como programador da concessionária e seu primeiro
trabalho é automatizar estes cálculos. Para isso, utilize os dados do salário fixo
e a quantidade de carros vendidos para calcular a folha de pagamento da empresa.

Entrada
Seu programa receberá como entrada um arquivo texto chamado vendidos.in. Neste
arquivo são dados vários conjuntos de entradas. Cada conjunto de entradas está
em uma linha do arquivo e contem as informações sobre os funcionários
na seguinte ordem: nome, salário fixo e quantidade de carros vendidos.

Saída
Para cada caso de entrada (linha) seu programa deverá imprimir em tela o nome
e o salário do funcionário. Cada linha de entrada resultará em uma linha
de saída. Não deixe linhas em branco na tela e nem exiba dados além do pedido! */

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
