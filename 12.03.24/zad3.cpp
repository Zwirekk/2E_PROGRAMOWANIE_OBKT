#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char imie[20];
	char nazwisko[20];
	char plec[1];

	printf("Podaj imie pracownika: ");
	scanf("%s", imie);

	printf("Podaj nazwisko pracownika: ");
	scanf("%s", nazwisko);

    do{
	    printf("(m/M - mezczyzna, k/K - kobieta\nPodaj plec pracownika: ");
	    scanf("%s", plec);
	    if(plec[0] != 'm' && plec[0] != 'M' && plec[0] != 'k' && plec[0] != 'K')
	    {
	        printf("Podana zla plec!\n");
	    }
    }while(plec[0] != 'm' && plec[0] != 'M' && plec[0] != 'k' && plec[0] != 'K');
    
    if(plec[0] == 'm' || plec[0] == 'M')
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