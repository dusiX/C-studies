// Napisz program w C, który jest kalkulatorem z histori¹ operacji zapisywanych w pliku.
// Program rozdziel na plik nag³ówkowy oraz odpowiadaj¹cy mu plik Ÿród³owy z funkcjami, które bêd¹ u¿ywane do obs³ugi wczytywania 
// i zapisywania historii.Kolejny nag³ówek + Ÿród³o, w którym jest zaimplementowana obs³uga wybranych dzia³añ matematycznych(przynajmniej 10 operacji).
// W pliku z funkcj¹ main() (chodzi o g³ówny plik ze Ÿród³em programu) wykorzystaj kod ze wspomnianych plików.
// W programie ma byæ menu z wyborem dzia³ania matematycznego + obs³uga historii(zapis / odczyt z / do pliku, wyœwietlenie historii, usuniêcie historii).
// Historia ma nie mieæ limitu zapamiêtanych operacji(ok, mo¿e byæ limit np. 4 miliardy wpisów;) chocia¿ lepiej i 2 ^ 64).

#include <stdio.h>
#include <zadanie8n.h>

int main() {

	FILE* fp = NULL;

	if ((fp = fopen("historia.txt", "a")) == NULL) {
		printf("Nie mozesz tego zrobic!");
		return 1;
	}

	

	return 0;

}