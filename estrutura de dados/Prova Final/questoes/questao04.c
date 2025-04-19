/* Crie e execute uma funC'C#o uma funC'C#o que receba 2 nC:meros e retorne o maior dos
nC:meros recebidos.*/

#include <stdio.h>

float calcular_ir(float salario) {
	if (salario <= 1500.00)
		return 0;
	else if (salario < 2500.00)
		return salario * 0.075;
	else
		return salario * 0.225;
}

int main () {
	float salario, ir, inss, salario_liquido;
	printf("Digite o salário base: ");
	scanf("%f", &salario);

	inss = salario * 0.075;
	ir = calcular_ir(salario);
	salario_liquido = salario - inss - ir;

	printf("Salário líquido: %.2f \n", salario_liquido);

	return 0;
}