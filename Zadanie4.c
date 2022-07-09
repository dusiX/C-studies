// Napisz program, kt�ry policzy krotno�� wyst�powania poszczeg�lnych znak�w drukowalnych z tabeli ASCII(wi�c nie bawimy si� w polskie znaki), 
// w pliku podanym jako argument programu.Napisz plik wej�ciowy lub wygeneruj np.jak�� angielsk� stron� z man'a. Wynik programu wy�wietl na standardowe wyj�cie.

// JE�ELI KOMPILUJE PAN W VISUAL STUDIO TO TRZEBA WEJ�� WE W�A�CIWO�CI --> C/C++ --> PREPROCESOR --> DEFINICJE PREPROCESORA
// I DODA� TAM NA KO�CU PODAN� NI�EJ FRAZ�, BO NIESTETY JEST JAKI� PROBLEM Z VS :(((
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