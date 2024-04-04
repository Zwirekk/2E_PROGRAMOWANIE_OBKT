#include <iostream>

using namespace std;

double PLN(double Kwota, string Waluta_posiadana);
double USD(double Kwota, string Waluta_posiadana);
double EUR(double Kwota, string Waluta_posiadana);
double GBP(double Kwota, string Waluta_posiadana);
double CHF(double Kwota, string Waluta_posiadana);
double CNY(double Kwota, string Waluta_posiadana);

int main()
{
	double Kwota, Kwota_po;
	string Waluta_posiadana, Waluta_chciana;

	cout << "Witaj w kantorze\nDostępne waluty: PLN, USD, EUR, GBP, CHF, CNY\n";

	do 
	{
		cout << "Podaj kwote do wymiany: ";
		cin >> Kwota;
	} while (Kwota <= 0);

	cout << "Podaj walute jaka posiadasz: ";
	cin >> Waluta_posiadana;

	cout << "Podaj na jaka walute chcesz wymienic: ";
	cin >> Waluta_chciana;

	if (Waluta_chciana == "PLN")
	{
		if (PLN(Kwota, Waluta_posiadana) == 0)
		{
			cout << "Nie posiadamy takiej waluty";
		}
		else
		{
			cout << Kwota << Waluta_posiadana << " to " << PLN(Kwota, Waluta_posiadana) << Waluta_chciana;
		}
	}
	else if (Waluta_chciana == "USD")
	{
		if (USD(Kwota, Waluta_posiadana) == 0)
		{
			cout << "Nie posiadamy takiej waluty";
		}
		else
		{
			cout << Kwota << Waluta_posiadana << " to " << USD(Kwota, Waluta_posiadana) << Waluta_chciana;
		}
	}
	else if (Waluta_chciana == "EUR")
	{
		if (EUR(Kwota, Waluta_posiadana) == 0)
		{
			cout << "Nie posiadamy takiej waluty";
		}
		else
		{
			cout << Kwota << Waluta_posiadana << " to " << EUR(Kwota, Waluta_posiadana) << Waluta_chciana;
		}
	}
	else if (Waluta_chciana == "GBP")
	{
		if (GBP(Kwota, Waluta_posiadana) == 0)
		{
			cout << "Nie posiadamy takiej waluty";
		}
		else
		{
			cout << Kwota << Waluta_posiadana << " to " << GBP(Kwota, Waluta_posiadana) << Waluta_chciana;
		}
	}
	else if (Waluta_chciana == "CHF")
	{
		if (CHF(Kwota, Waluta_posiadana) == 0)
		{
			cout << "Nie posiadamy takiej waluty";
		}
		else
		{
			cout << Kwota << Waluta_posiadana << " to " << CHF(Kwota, Waluta_posiadana) << Waluta_chciana;
		}
	}
	else if (Waluta_chciana == "CNY")
	{
		if (CNY(Kwota, Waluta_posiadana) == 0)
		{
			cout << "Nie posiadamy takiej waluty";
		}
		else
		{
			cout << Kwota << Waluta_posiadana << " to " << CNY(Kwota, Waluta_posiadana) << Waluta_chciana;
		}
	}
	else
	{
		cout << "Nie posiadamy takiej waluty";
	}

}

double PLN(double Kwota, string Waluta_posiadana)
{
	double Kwota_po;
	if (Waluta_posiadana == "PLN")
	{
		return Kwota_po = Kwota;
	}
	else if (Waluta_posiadana == "USD")
	{
		return Kwota_po = 3.95 * Kwota;
	}
	else if (Waluta_posiadana == "EUR")
	{
		return Kwota_po = 4.29 * Kwota;
	}
	else if (Waluta_posiadana == "GBP")
	{
		return Kwota_po = 5.01 * Kwota;
	}
	else if (Waluta_posiadana == "CHF")
	{
		return Kwota_po = 4.36 * Kwota;
	}
	else if (Waluta_posiadana == "CNY")
	{
		return Kwota_po = 0.55 * Kwota;
	}
	else
	{
		return 0;
	}
}


double USD(double Kwota, string Waluta_posiadana)
{
	double Kwota_po;
	if (Waluta_posiadana == "PLN")
	{
		return Kwota_po = 0.25 * Kwota;
	}
	else if (Waluta_posiadana == "USD")
	{
		return Kwota_po = Kwota;
	}
	else if (Waluta_posiadana == "EUR")
	{
		return Kwota_po = 1.09 * Kwota;
	}
	else if (Waluta_posiadana == "GBP")
	{
		return Kwota_po = 1.27 * Kwota;
	}
	else if (Waluta_posiadana == "CHF")
	{
		return Kwota_po = 1.10 * Kwota;
	}
	else if (Waluta_posiadana == "CNY")
	{
		return Kwota_po = 0.14 * Kwota;
	}
	else
	{
		return 0;
	}
}

double EUR(double Kwota, string Waluta_posiadana)
{
	double Kwota_po;
	if (Waluta_posiadana == "PLN")
	{
		return Kwota_po = 0.23 * Kwota;
	}
	else if (Waluta_posiadana == "USD")
	{
		return Kwota_po = 0.92 * Kwota;
	}
	else if (Waluta_posiadana == "EUR")
	{
		return Kwota_po = Kwota;
	}
	else if (Waluta_posiadana == "GBP")
	{
		return Kwota_po = 1.17 * Kwota;
	}
	else if (Waluta_posiadana == "CHF")
	{
		return Kwota_po = 1.02 * Kwota;
	}
	else if (Waluta_posiadana == "CNY")
	{
		return Kwota_po = 0.13 * Kwota;
	}
	else
	{
		return 0;
	}
}

double GBP(double Kwota, string Waluta_posiadana)
{
	double Kwota_po;
	if (Waluta_posiadana == "PLN")
	{
		return Kwota_po = 0.20 * Kwota;
	}
	else if (Waluta_posiadana == "USD")
	{
		return Kwota_po = 0.79 * Kwota;
	}
	else if (Waluta_posiadana == "EUR")
	{
		return Kwota_po = 0.86 * Kwota;
	}
	else if (Waluta_posiadana == "GBP")
	{
		return Kwota_po = Kwota;
	}
	else if (Waluta_posiadana == "CHF")
	{
		return Kwota_po = 0.87 * Kwota;
	}
	else if (Waluta_posiadana == "CNY")
	{
		return Kwota_po = 0.11 * Kwota;
	}
	else
	{
		return 0;
	}
}

double CHF(double Kwota, string Waluta_posiadana)
{
	double Kwota_po;
	if (Waluta_posiadana == "PLN")
	{
		return Kwota_po = 0.23 * Kwota;
	}
	else if (Waluta_posiadana == "USD")
	{
		return Kwota_po = 0.91 * Kwota;
	}
	else if (Waluta_posiadana == "EUR")
	{
		return Kwota_po = 0.98 * Kwota;
	}
	else if (Waluta_posiadana == "GBP")
	{
		return Kwota_po = 1.15 * Kwota;
	}
	else if (Waluta_posiadana == "CHF")
	{
		return Kwota_po = Kwota;
	}
	else if (Waluta_posiadana == "CNY")
	{
		return Kwota_po = 0.13 * Kwota;
	}
	else
	{
		return 0;
	}
}

double CNY(double Kwota, string Waluta_posiadana)
{
	double Kwota_po;
	if (Waluta_posiadana == "PLN")
	{
		return Kwota_po = 1.83 * Kwota;
	}
	else if (Waluta_posiadana == "USD")
	{
		return Kwota_po = 7.24 * Kwota;
	}
	else if (Waluta_posiadana == "EUR")
	{
		return Kwota_po = 7.70 * Kwota;
	}
	else if (Waluta_posiadana == "GBP")
	{
		return Kwota_po = 9.16 * Kwota;
	}
	else if (Waluta_posiadana == "CHF")
	{
		return Kwota_po = 7.98 * Kwota;
	}
	else if (Waluta_posiadana == "CNY")
	{
		return Kwota_po = Kwota;
	}
	else
	{
		return 0;
	}
}
