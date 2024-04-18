#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string mieszajLitery(string PodaneSlowo);
string Zgadywanie(string WymieszaneSlowo, string PodaneSlowo);
int Powtorka();

int main()
{
	// pobranie slowa
	// mieszanie slowa
	// odgadniecie

	do
	{
		string const Slowo("C:/aaa/scores.txt");
		ofstream Strumien(Slowo.c_str());
		string PodaneSlowo;

		if (Strumien)
		{


			cout << "Podaj slowo: ";
			cin >> PodaneSlowo;

			Strumien << PodaneSlowo << endl;
		}

		else
		{
			cout << "Plik nie dziala";
		}

		string Wymieszane = mieszajLitery(PodaneSlowo);
		Zgadywanie(Wymieszane, PodaneSlowo);
		Strumien.close();

	} while (Powtorka() == 1);

	return 0;

}

string mieszajLitery(string PodaneSlowo)
{
	string WymieszaneSlowo;
	int pozycja(0);

	while (PodaneSlowo.size() != 0)
	{
		pozycja = rand() % PodaneSlowo.size();
		WymieszaneSlowo += PodaneSlowo[pozycja];
		PodaneSlowo.erase(pozycja, 1);

	}


	return WymieszaneSlowo;
}


string Zgadywanie(string WymieszaneSlowo, string PodaneSlowo)
{
	string SlowoZgadywane;
	int i = 1;


	do
	{
		cout << "Podaj poprawne slowo: " << WymieszaneSlowo << endl;
		cin >> SlowoZgadywane;
		if (SlowoZgadywane == PodaneSlowo)
		{
			cout << "Zgadles\n";
		

		}
		else
		{
			cout << "Nie zgadles\n";
			i++;
			if (i > 5)
			{
				cout << "Za duzo prob, przegrales\n";
				
			}
		}

	} while (SlowoZgadywane != PodaneSlowo && i <= 5);


	return SlowoZgadywane;
}


int Powtorka()
{
	char TN;
	cout << "Czy chcesz zagrac jeszce raz: (t/n)   ";
	cin >> TN;
	if (TN == 't')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

