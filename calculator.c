// Programme is a calculator which saves its history in the file.

#include <stdio.h>
#include "dzialania.h"

void wypisz_menu_glowne()
{
    printf("Main menu:\n");
    printf("1) Add\n2) Subtract\n");
    printf("5) History\n");
    printf("9) Leave");  
}

int main()  
{  
    int opcja;  
      
    for (;;)
    {
      wypisz_menu_glowne();
      printf("\nProvide an option:");
      scanf("%d", &opcja);
      switch (opcja)
      {
        case 1:
            dodawanie();
            break;
        
        case 2:
            odejmowanie();
            break;

        case 5:
            historia();
            break;

        case 9:
            return 0;
      }
    }    
    return 0;  
}  
