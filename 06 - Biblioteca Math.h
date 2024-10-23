///
Objetivo:

Desenvolver um programa em C que utilize a biblioteca math.h para realizar uma série de cálculos matemáticos com duas variáveis do tipo double. O programa deve solicitar ao usuário a entrada de dois valores e, em seguida, calcular e exibir os resultados de várias operações matemáticas avançadas.

Descrição do Problema:

Entrada de Dados:

O programa deve solicitar ao usuário que insira dois valores do tipo double. Esses valores serão armazenados nas variáveis a e b.
Operações Matemáticas:

Realize e exiba os seguintes cálculos para os valores fornecidos:
Potência: Calcule 
a
b
ab usando a função pow() da biblioteca math.h.
Raiz Quadrada: Calcule a raiz quadrada de a e b usando a função sqrt(). Caso o valor de entrada seja negativo, exiba uma mensagem de erro.
Funções Trigonométricas: Calcule o seno (sin()), cosseno (cos()) e tangente (tan()) dos valores a e b.
Funções Hiperbólicas: Calcule o seno hiperbólico (sinh()), cosseno hiperbólico (cosh()) e tangente hiperbólica (tanh()) dos valores a e b.
Logaritmos: Calcule o logaritmo natural (log()) e o logaritmo de base 10 (log10()) dos valores a e b. Caso o valor seja menor ou igual a zero, exiba uma mensagem de erro.
Exponencial: Calcule a função exponencial (exp()) para os valores a e b.
Valor Absoluto: Calcule o valor absoluto (fabs()) dos valores a e b.
Arredondamento e Truncamento: Arredonde (round()) e trunque (trunc()) os valores a e b.
Resto da Divisão: Calcule o resto da divisão de a por b usando a função fmod(). Caso b seja zero, exiba uma mensagem de erro.
Saída:

O programa deve exibir os resultados de todos os cálculos solicitados de forma clara e formatada para o usuário.
Aqui está um exemplo de saída para o programa descrito no enunciado, considerando valores de entrada fictícios a = 5.0 e b = 3.0:

Digite o valor da primeira variável (a): 5.0
Digite o valor da segunda variável (b): 3.0

Operações com math.h:
Potência: 5.000000^3.000000 = 125.000000
Raiz quadrada de 5.000000 = 2.236068
Raiz quadrada de 3.000000 = 1.732051
Seno de 5.000000 = -0.958851
Cosseno de 3.000000 = -0.989992
Tangente de 5.000000 = 0.283662
Seno hiperbólico de 5.000000 = 74.203210
Cosseno hiperbólico de 3.000000 = 10.067662
Tangente hiperbólica de 5.000000 = 0.999909
Logaritmo natural de 5.000000 = 1.609438
Logaritmo natural de 3.000000 = 1.098612
Logaritmo de base 10 de 5.000000 = 0.698970
Logaritmo de base 10 de 3.000000 = 0.477121
Exponencial de 5.000000 = 148.413159
Exponencial de 3.000000 = 20.085537
Valor absoluto de 5.000000 = 5.000000
Valor absoluto de 3.000000 = 3.000000
Arredondamento para o inteiro mais próximo de 5.000000 = 5.000000
Arredondamento para o inteiro mais próximo de 3.000000 = 3.000000
Truncamento de 5.000000 = 5.000000
Truncamento de 3.000000 = 3.000000
Resto da divisão de 5.000000 por 3.000000 = 2.000000
///



#include <stdio.h>
#include <math.h>

int main() {
	double a, b;

	// Solicita ao usuC!rio para inserir os valores
	printf("Digite o valor da primeira variável (a): ");
	scanf("%lf", &a);
	printf("Digite o valor da segunda variável (b): ");
	scanf("%lf", &b);

	// OperaC'C5es avanC'adas com math.h
	printf("\nOperações com math.h:\n");

	// PotC*ncia
	printf("Potência: %lf^%lf = %lf\n", a, b, pow(a, b));

	// Raiz quadrada
	printf("Raiz quadrada de %lf = %lf\n", a, sqrt(a));
	printf("Raiz quadrada de %lf = %lf\n", b, sqrt(b));

	// FunC'C5es trigonomC)tricas
	printf("Seno de %lf = %lf\n", a, sin(a));
	printf("Cosseno de %lf = %lf\n", b, cos(b));
	printf("Tangente de %lf = %lf\n", a, tan(a));

	// FunC'C5es hiperbC3licas
	printf("Seno hiperbólico de %lf = %lf\n", a, sinh(a));
	printf("Cosseno hiperbólico de %lf = %lf\n", b, cosh(b));
	printf("Tangente hiperbólica de %lf = %lf\n", a, tanh(a));

	// Logaritmos
	printf("Logaritmo natural de %lf = %lf\n", a, log(a));
    printf("Logaritmo natural de %lf = %lf\n", b, log(b));
	printf("Logaritmo de base 10 de %lf = %lf\n", a, log10(a));
	printf("Logaritmo de base 10 de %lf = %lf\n", b, log10(b));

	// Exponencial
	printf("Exponencial de %lf = %lf\n", a, exp(a));
	printf("Exponencial de %lf = %lf\n", b, exp(b));

	// Valor absoluto
	printf("Valor absoluto de %lf = %lf\n", a, fabs(a));
	printf("Valor absoluto de %lf = %lf\n", b, fabs(b));

	// Arredondamento
	printf("Arredondamento para o inteiro mais próximo de %lf = %lf\n", a, round(a));
	printf("Arredondamento para o inteiro mais próximo de %lf = %lf\n",b, round(b));

	// Truncamento
	printf("Truncamento de %lf = %lf\n", a, trunc(a));
	printf("Truncamento de %lf = %lf\n", b, trunc(b));

	// FunC'C#o fmod (resto da divisC#o de a por b)
	printf("Resto da divisão de %lf por %lf = %lf\n", a, b, fmod(a, b));

	return 0;
}
