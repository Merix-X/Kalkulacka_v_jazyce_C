#include <stdio.h>

int cislo, cislo2, vypocet;
char znak;
main()
{
    printf("Zadejte cislo: ");  /* Takhle se dělají komentáře */
    scanf("%d", &cislo);

    printf("Zadejte znamenko: ");
    scanf(" %c", &znak);

    printf("Zadejte druhe cislo: ");
    scanf("%d", &cislo2);

    if (znak == '*' || znak == 'x'){
        vypocet = cislo * cislo2;
        printf("Vysledek je: %d\n", vypocet);
    }

    if (znak == '/' || znak == ':'){
        vypocet = cislo / cislo2;
        printf("Vysledek je: %d\n", vypocet);
    }

    if (znak == '+'){
        vypocet = cislo + cislo2;
        printf("Vysledek je: %d\n", vypocet);
    }

    if (znak == '-'){
        vypocet = cislo - cislo2;
        printf("Vysledek je: %d\n", vypocet);
    }
    printf("Stisknete enter pro ukonceni");
    scanf();
}
