#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char imie[20];
    char nazwisko[20];
    char plec[10];

    printf("Podaj imie pracownika: ");
    scanf_s("%s", imie, 20);

    printf("Podaj nazwisko pracownika: ");
    scanf_s("%s", nazwisko, 20);
    do {
            printf("(m/M - mezczyzna, k/K - kobieta\nPodaj plec pracownika: ");
            scanf_s("%s", plec, 2);
            if (plec[0] != 'm' && plec[0] != 'M' && plec[0] != 'k' && plec[0] != 'K')
            {
                printf("Podana zla plec!\n");
            }
} while (plec[0] != 'm' && plec[0] != 'M' && plec[0] != 'k' && plec[0] != 'K');

    if (plec[0] == 'm' || plec[0] == 'M')
    {
        printf("Imie: %s", imie);
        printf(" Nazwisko: %s", nazwisko);
        printf(" Plec: Mezczyzna");
    }
    else
    {
        printf("Imie: %s", imie);
        printf(" Nazwisko: %s", nazwisko);
        printf(" Plec: Kobieta");
    }


}
