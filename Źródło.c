// Wstawiam jeszcze raz, bo Ÿle zrozumia³am polecenie. Mam nadziejê, ¿e to ju¿ ostatni

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int a = 1;
	int i;

	int* tab1;
	tab1 = (int*)malloc(sizeof(int) * a);
	int* tab2;
	tab2 = (int*)malloc(sizeof(int) * a);

	printf("Podaj rozmiar tablicy 1 i 2, który jest mniejszy od 10:\n");
	scanf_s("%i", &a);

	if (a >= 10) {
		printf("Rozmiar mial byc mniejszy od 10, nie oszukasz mnie xD");
		return 0;
	}

	srand((unsigned int)time(NULL));

	for (i = 0; i < a; ++i) {
		tab1[i] = rand() % 10;
	}

	printf("Wartosci tablicy 1:\n");

	for (i = 0; i < a; i++) {
		printf("tab1[%i] = %i\n", i, tab1[i]);
	}

	for (i = 0; i < a; ++i) {
		tab2[i] = rand() % 10;
	}

	printf("Wartosci tablicy 2:\n");

	for (i = 0; i < a; i++) {
		printf("tab2[%i] = %i\n", i, tab2[i]);
	}

	int c = a + a - 1;

	long int* tab3;
	tab3 = (long int*)malloc(sizeof(long int) * c);

	int d = 0;

	for (i = 0; i <= c; i++) {
		tab3[i] = tab1[d];
		i++;
		tab3[i] = tab2[d];
		d++;
	}

	printf("Wartosci tablicy 3:\n");

	for (i = 0; i <= c; i++) {
		printf("tab3[%i] = %li\n", i, tab3[i]);
	}

	return 0;
}

