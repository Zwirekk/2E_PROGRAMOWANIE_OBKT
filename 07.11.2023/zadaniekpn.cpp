#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	/* nozyczki bija papier i jaszczurke	1
	papier bije psa i kamien				2
	kamien bije jaszczurke i nozyczki		3 
	jaszczurka bije psa i papier			4 
	pies bije nozyxczki i kamien			5
	*/

	int wybranagracz, wybranakomp;
	int wygranegracza = 0;
	int wygranekomputera = 0;
	string wybranekomputera_wypis;
	cout << "1 nozyczki, 2 papier, 3 kamien, 4 jaszczurka, 5 pies, 0 konczy program\n";


	do {
		cout << "Wybierz postac: ";
		cin >> wybranagracz;
		if (wybranagracz < 0 || wybranagracz > 5)
		{
			cout << "Wprowadzono niepoprawna postac\n";
			continue;

		}
		if (wybranagracz == 0)
		{
			break;
		}

		srand(time(0));
		wybranakomp = (rand() % 4) + 1;
		switch (wybranakomp)
		{
		case 1:
			wybranekomputera_wypis = "nozyce";
			break;
		case 2:
			wybranekomputera_wypis = "papier";
			break;
		case 3:
			wybranekomputera_wypis = "kamien";
			break;
		case 4:
			wybranekomputera_wypis = "jaszczurka";
			break;
		case 5:
			wybranekomputera_wypis = "pies";
			break;
		}
		cout << wybranakomp << "\n";

		switch (wybranagracz)
		{
		case 1: // nozyce
			if (wybranakomp == 2 || wybranakomp == 4)
			{
				++wygranegracza;
				cout << "Wybrano nozyce, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Gracz wygrywa\n";
				break;
			}
			else if (wybranakomp == 3 || wybranakomp == 5)
			{
				++wygranekomputera;
				cout << "Wybrano nozyce, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Komputer wygrywa\n";
				break;
			}
			else
			{
				cout << "Wybrano nozyce, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Remis\n";
				break;
			}
		case 2: // papier
			if (wybranakomp == 3 || wybranakomp == 5)
			{
				++wygranegracza;
				cout << "Wybrano papier, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Gracz wygrywa\n";
				break;
			}
			else if (wybranakomp == 1 || wybranakomp == 4)
			{
				++wygranekomputera;
				cout << "Wybrano papier, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Komputer wygrywa\n";
				break;
			}
			else
			{
				cout << "Wybrano papier, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Remis\n";
				break;
			}
		case 3: // kamien
			if (wybranakomp == 1 || wybranakomp == 4)
			{
				++wygranegracza;
				cout << "Wybrano kamien, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Gracz wygrywa\n";
				break;
			}
			else if (wybranakomp == 2 || wybranakomp == 5)
			{
				++wygranekomputera;
				cout << "Wybrano kamien, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Komputer wygrywa\n";
				break;
			}
			else
			{
				cout << "Wybrano kamien, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Remis\n";
				break;
			}
		case 4: // jaszczurka
			if (wybranakomp == 2 || wybranakomp == 5)
			{
				++wygranegracza;
				cout << "Wybrano jaszczurke, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Gracz wygrywa\n";
				break;
			}
			else if (wybranakomp == 1 || wybranakomp == 3)
			{
				++wygranekomputera;
				cout << "Wybrano jaszczurke, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Komputer wygrywa\n";
				break;
			}
			else
			{
				cout << "Wybrano jaszczurke, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Remis\n";
				break;
			}
		case 5: // pies
			if (wybranakomp == 1 || wybranakomp == 3)
			{
				++wygranegracza;
				cout << "Wybrano psa, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Gracz wygrywa\n";
				break;
			}
			else if (wybranakomp == 2 || wybranakomp == 4)
			{
				++wygranekomputera;
				cout << "Wybrano psa, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Komputer wygrywa\n";
				break;
			}
			else
			{
				cout << "Wybrano psa, komputer wybral " << wybranekomputera_wypis << "\n";
				cout << "Remis\n";
				break;
			}

		}
	}while (wybranagracz != 0);
	if (wygranegracza > wygranekomputera)
	{
		cout << "Gracz wygral\n";
	}
	else if (wygranekomputera > wygranegracza)
	{
		cout << "\nKomputer wygral\n";
	}
	else
	{
		cout << "Remis\n";
	}
	cout << "Zakonczone gre ilosc wygranych gracza: " << wygranegracza << " , ilosc wygranych komputera: " << wygranekomputera;
}