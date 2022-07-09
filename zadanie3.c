// Napisz program, kt�ry dynamicznie alokuje tablic�(wielko�� podawana jako argument programu) i wype�nia j� losowo generowanymi liczbami.
// W programie napisz funkcj�, kt�ra oblicza iloczyn nieparzystych liczb naturalnych z wygenerowanej tablicy(tablica jako argument funkcji).
// Wygenerowan� tablic� oraz wynik funkcji wypisz na standardowe wyj�cie oraz do pliku(�cie�ka do pliku jest podawana jako drugi argument programu)


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#pragma warning(disable : 4996)

int main(int argc, char* argv[]) {

	FILE* fp=NULL;

	if (argc < 3) {
		printf("Za malo argumentow\n");
		return 0;
	}

	int a = atoi(argv[1]), i;
	char* sciezka = argv[2];
	int c = 1;

	int *tab = NULL;
	tab = (int*)malloc(sizeof(int) *a);


	srand((unsigned int) time(NULL));

	for (i = 0; i < a; ++i) {

		tab[i] = rand() % 10;

	}

	printf("Argumenty tablicy:\n");

	for (i = 0; i < a; i++) {
		printf("%i", tab[i]);
		printf("\n");
	}
	
	for (i = 0; i < a; i++) {

		if (tab[i] % 2 == 1) {
			c = c * tab[i];
		}

	}

	printf("Iloczyn liczb nieparzystych z tablicy to: %i\n", c);

	if ((fp = fopen(sciezka, "w")) == NULL) {
			printf("Nie mozesz tego zrobic!\n");
			return(1);
	}

	fprintf(fp, "Argumenty tablicy:\n");

	for (i = 0; i < a; i++) {
		fprintf(fp, "%i", tab[i]);
		fprintf(fp, "\n");
	}

	fprintf(fp, "Iloczyn liczb nieparzystych z tablicy to %d \n", c);
	fclose(fp);

	free(tab);
	tab = NULL;

	return 0;

}