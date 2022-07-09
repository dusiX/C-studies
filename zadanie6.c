// Napisz program w C, który wydrukuje czy wczytana litera jest samog³osk¹, czy spó³g³osk¹.

#include <stdio.h>
#include <locale.h>



int main()
{
    setlocale(LC_CTYPE, "Polish");
    char litera;

    printf("Podaj jak¹œ literê: \n");
    scanf_s(" %c", &litera);

    if (litera == '1' || litera == '2' || litera == '3' || litera == '4' || litera == '5' || litera == '6' || litera == '7' || litera == '8' || litera == '9' || litera == '0') {
        printf("To nie jest litera, tylko cyfra XD");
        return 0;
    }

    if (litera == 'a' || litera == 'e' || litera == 'i' || litera == 'o' || litera == 'u' || litera == 'y' || litera == '¹' || litera == 'A' || litera == 'E' || litera == 'I' || litera == 'O' || litera == 'U' || litera == 'Y' || litera == '¥'){

        printf("%c jest samog³osk¹.", litera);

    }
    
    else{
        
        printf("\nTwoja liczba jest spó³g³osk¹");
    
    }

    return 0;

}