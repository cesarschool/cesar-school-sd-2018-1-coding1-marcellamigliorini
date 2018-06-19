#include <stdio.h>
/**
* Escreva uma função que encontra a primeira letra que não se repete em uma
* sentença.
* Função: char firstNonRepeatingChar(char[] sentence, int length)
* Input:
* - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
* - length: tamanho do array - número de caracteres
* Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
*/
char firstNonRepeatingChar(char sentence[], int length)
{
	printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);

	int letra = 0;
	int comparar = 0;
	int repete = 0;
	int tamanho = length - 1;

	while (letra <= tamanho) {
		comparar = 0;
		repete = 0;
		while (comparar <= tamanho) {
			if (sentence[letra] == ' ') {
				repete = 1;
				break;
			}
			else if (sentence[comparar] == sentence[letra] && comparar != letra) {
				repete = 1;
				break;
			}
			comparar++;
		}

		if (repete == 0) {
			printf("%c", sentence[letra]);
			printf("\nfirstNonRepeatingChar::END\n");
			return sentence[letra];
		}
		letra++;
	}
	printf("-1");

	printf("\nfirstNonRepeatingChar::END\n");
	return -1;
}

int main()
{
	printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");

	firstNonRepeatingChar("ovo", 3);
	firstNonRepeatingChar("cesar school", 12);
	firstNonRepeatingChar("sistemas digitais", 17);

	return 0;
}
