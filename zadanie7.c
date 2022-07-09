// Napisz program w C, który dzia³a jak wc, tylko na pliku. (liczenie s³ów, bajtów, linii)

// JE¯ELI KOMPILUJE PAN W VISUAL STUDIO TO TRZEBA WEJŒÆ WE W£AŒCIWOŒCI --> C/C++ --> PREPROCESOR --> DEFINICJE PREPROCESORA
// I DODAÆ TAM NA KOÑCU PODAN¥ NI¯EJ FRAZÊ, BO NIESTETY JEST JAKIŒ PROBLEM Z VS :(((
// ;_CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

	FILE* fp = NULL;

	if (argc < 2) {
		printf("Za malo argumentow\n");
		return 1;
	}

	char* sciezka = argv[1];

	if ((fp = fopen(sciezka, "r")) == NULL) {
		printf("Nie mozesz tego zrobic!");
		return 1;
		}

	int bajty = 0;
	int slowa = 1;
	int linijki = 0;
	int znaki = 1;
	char ch, c;

	printf("Licze...\n\n");

	ch = fgetc(fp);

	while (ch != EOF) {

		if (ch == '\n') {

			linijki = linijki + 1;
			slowa++;

		} else if (ch == ' ') {
			slowa++;
		}
		else {
			znaki++;
		}

		ch = fgetc(fp);
	
	}

	linijki = linijki + 1;

	fseek(fp, 0L, SEEK_END);
	bajty = ftell(fp);
	
	printf("Liczba bajtow w pliku: %d\n", bajty);

	printf("Liczba linijek w pliku: %d\n", linijki);

	printf("Liczba slow w pliku: %d\n", slowa);

	printf("Liczba znakow w pliku: %d\n", znaki);

	if (fp == NULL) {
		return 1;
	}
	else(fclose(fp));

	return 0;

}