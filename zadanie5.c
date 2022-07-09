// Napisz program w C, który znajduje i wypisuje pierwsz¹ i ostatni¹ cyfrê w liczbie(int).

#include <stdio.h>

int main() {

	int liczba, pierwsza, ostatnia;
	int n;

	printf("Ten program ma za zadanie wypisac pierwsza i ostatnia cyfre w liczbie\n");
	printf("Podaj swoja liczbe:\n");
	scanf_s("%d", &liczba);

	ostatnia = liczba % 10;

	while (liczba >= 10){
		liczba = liczba / 10;
	}

	pierwsza = liczba;

	printf("Pierwsza cyfra w Twojej liczbie to: %d\n", pierwsza);
	printf("Ostatnia cyfra w Twojej liczbie to: %d\n", ostatnia);

	return 0;
}