// Napisz program w C, kt�ry jest kalkulatorem z histori� operacji zapisywanych w pliku.
// Program rozdziel na plik nag��wkowy oraz odpowiadaj�cy mu plik �r�d�owy z funkcjami, kt�re b�d� u�ywane do obs�ugi wczytywania 
// i zapisywania historii.Kolejny nag��wek + �r�d�o, w kt�rym jest zaimplementowana obs�uga wybranych dzia�a� matematycznych(przynajmniej 10 operacji).
// W pliku z funkcj� main() (chodzi o g��wny plik ze �r�d�em programu) wykorzystaj kod ze wspomnianych plik�w.
// W programie ma by� menu z wyborem dzia�ania matematycznego + obs�uga historii(zapis / odczyt z / do pliku, wy�wietlenie historii, usuni�cie historii).
// Historia ma nie mie� limitu zapami�tanych operacji(ok, mo�e by� limit np. 4 miliardy wpis�w;) chocia� lepiej i 2 ^ 64).

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