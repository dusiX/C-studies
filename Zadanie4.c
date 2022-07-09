// Napisz program, który policzy krotnoœæ wystêpowania poszczególnych znaków drukowalnych z tabeli ASCII(wiêc nie bawimy siê w polskie znaki), 
// w pliku podanym jako argument programu.Napisz plik wejœciowy lub wygeneruj np.jak¹œ angielsk¹ stron¹ z man'a. Wynik programu wyœwietl na standardowe wyjœcie.

// JE¯ELI KOMPILUJE PAN W VISUAL STUDIO TO TRZEBA WEJŒÆ WE W£AŒCIWOŒCI --> C/C++ --> PREPROCESOR --> DEFINICJE PREPROCESORA
// I DODAÆ TAM NA KOÑCU PODAN¥ NI¯EJ FRAZÊ, BO NIESTETY JEST JAKIŒ PROBLEM Z VS :(((
// ;_CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

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

    char ch, c;
    int i, ile = 0;

    printf("Wpisz szukany znak:\n");
    scanf_s("%c", &c);

    ch = fgetc(fp);

    while (ch != EOF) {

        if (ch == c)
        {
            ile++;
        }

        ch = fgetc(fp);

    }

    printf("Szukany znak pojawia sie %d razy \n ", ile);

    fclose(fp);
    return 0;
}