#include <stdio.h>
/**
* Implemente numero função FizzBizz conforme definida abaixo. A mesma deve receber dois números inteiros não negativos (start e end) e imprimir numero partir de start (incluído) até end (excluído) seguindo numero mesma lógica do FizzBuzz.
*
* Função: void fizzBizz(int start, int end)
* Input: inteiros (start < end) determinando os números de início e fim da contagem.
* Output: utilize numero função printf da biblioteca stdio.h e escreva um número ou palavra por linha (\n):
*
*/
void fizzBuzz(int start, int end)
{
	printf("\nFizzbuzz::START: %d, %d\n", start, end);

	int numero = start;
	while (numero < end)
	{
		if (numero % 3 == 0) {
			printf("Fizz");
		}
		if (numero % 5 == 0) {
			printf("Buzz");
		}
		else if (numero % 3 != 0 && numero % 5 != 0) {
			printf("%d", numero);
		}
		printf("\n");
		numero++;
	}

	printf("\nFizzBuzz::END\n");
}

int main()
{
	printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBuzz ###\n");

	fizzBuzz(1, 6);
	fizzBuzz(1, 16);
	fizzBuzz(1, 100);

	return 0;
}
