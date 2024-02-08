#include <iostream>
using namespace std;

int zamiana_bit(int rozmiar, string jednostka_zamienna);
int zamiana_bajt(int rozmiar, string jednostka_zamienna);
int zamiana_kilobajt(int rozmiar, string jednostka_zamienna);
int zamiana_megabajt(int rozmiar, string jednostka_zamienna);
int zamiana_gigabajt(int rozmiar, string jednostka_zamienna);
int zamiana_terabajt(int rozmiar, string jednostka_zamienna);

int main()
{
	int rozmiar;
	string jednostka_podana, jednostka_zamienna;
	cout << "Podaj rozmiar: ";
	cin >> rozmiar;

	do
	{
		cout << "bit, bajt, kilobajt, megabajt, gigabajt, terabajt\nPodaj jednostke: ";
		cin >> jednostka_podana;

	} while (jednostka_podana != "bit" && jednostka_podana != "bajt" && jednostka_podana != "kilobajt" && jednostka_podana != "megabajt" && jednostka_podana != "gigabajt" && jednostka_podana != "terabajt");

	do
	{
		cout << "Podaj na jaka jednostke chcesz zamienic(te same nazwy): ";
		cin >> jednostka_zamienna;

	} while (jednostka_podana != "bit" && jednostka_podana != "bajt" && jednostka_podana != "kilobajt" && jednostka_podana != "megabajt" && jednostka_podana != "gigabajt" && jednostka_podana != "terabajt");

	if (jednostka_podana == "bit")
	{
		cout << rozmiar << " " << jednostka_podana << " to: " << zamiana_bit(rozmiar, jednostka_zamienna) << " " << jednostka_zamienna;
	}
	else if (jednostka_podana == "bajt")
	{
		cout << rozmiar << " " << jednostka_podana << " to: " << zamiana_bajt(rozmiar, jednostka_zamienna) << " " << jednostka_zamienna;
	}
	else if (jednostka_podana == "kilobajt")
	{
		cout << rozmiar << " " << jednostka_podana << " to: " << zamiana_kilobajt(rozmiar, jednostka_zamienna) << " " << jednostka_zamienna;
	}
	else if (jednostka_podana == "megabajt")
	{
		cout << rozmiar << " " << jednostka_podana << " to: " << zamiana_megabajt(rozmiar, jednostka_zamienna) << " " << jednostka_zamienna;
	}
	else if (jednostka_podana == "gigabajt")
	{
		cout << rozmiar << " " << jednostka_podana << " to: " << zamiana_gigabajt(rozmiar, jednostka_zamienna) << " " << jednostka_zamienna;
	}
	else if (jednostka_podana == "terabajt")
	{
		cout << rozmiar << " " << jednostka_podana << " to: " << zamiana_terabajt(rozmiar, jednostka_zamienna) << " " << jednostka_zamienna;
	}
}

int zamiana_bit(int rozmiar, string jednostka_zamienna)
{
	int zamieniona;
	if (jednostka_zamienna == "bit")
	{
		zamieniona = rozmiar;
	}
	else if (jednostka_zamienna == "bajt")
	{
		zamieniona = rozmiar / 8;
	}
	else if (jednostka_zamienna == "kilobajt")
	{
		zamieniona = rozmiar / 8 / 1024;
	}
	else if (jednostka_zamienna == "megabajt")
	{
		zamieniona = rozmiar / 8 / 1024 / 1024;
	}
	else if (jednostka_zamienna == "gigabajt")
	{
		zamieniona = rozmiar / 8 / 1024 / 1024 / 1024;
	}
	else if (jednostka_zamienna == "terabajt")
	{
		zamieniona = rozmiar / 8 / 1024 / 1024 / 1024 / 1024;
	}

	return zamieniona;
}

int zamiana_bajt(int rozmiar, string jednostka_zamienna)
{
	int zamieniona;
	if (jednostka_zamienna == "bit")
	{
		zamieniona = rozmiar * 8;
	}
	else if (jednostka_zamienna == "bajt")
	{
		zamieniona = rozmiar;
	}
	else if (jednostka_zamienna == "kilobajt")
	{
		zamieniona = rozmiar / 1024;
	}
	else if (jednostka_zamienna == "megabajt")
	{
		zamieniona = rozmiar / 1024 / 1024;
	}
	else if (jednostka_zamienna == "gigabajt")
	{
		zamieniona = rozmiar / 1024 / 1024 / 1024;
	}
	else if (jednostka_zamienna == "terabajt")
	{
		zamieniona = rozmiar / 1024 / 1024 / 1024 / 1024;
	}

	return zamieniona;
}

int zamiana_kilobajt(int rozmiar, string jednostka_zamienna)
{
	int zamieniona;
	if (jednostka_zamienna == "bit")
	{
		zamieniona = rozmiar * 1024 * 8;
	}
	else if (jednostka_zamienna == "bajt")
	{
		zamieniona = rozmiar / 1024;
	}
	else if (jednostka_zamienna == "kilobajt")
	{
		zamieniona = rozmiar;
	}
	else if (jednostka_zamienna == "megabajt")
	{
		zamieniona = rozmiar / 1024;
	}
	else if (jednostka_zamienna == "gigabajt")
	{
		zamieniona = rozmiar / 1024 / 1024;
	}
	else if (jednostka_zamienna == "terabajt")
	{
		zamieniona = rozmiar / 1024 / 1024 / 1024;
	}

	return zamieniona;
}

int zamiana_megabajt(int rozmiar, string jednostka_zamienna)
{
	int zamieniona;
	if (jednostka_zamienna == "bit")
	{
		zamieniona = rozmiar * 8 * 1024 * 1024;
	}
	else if (jednostka_zamienna == "bajt")
	{
		zamieniona = rozmiar * 8 * 1024;
	}
	else if (jednostka_zamienna == "kilobajt")
	{
		zamieniona = rozmiar * 8;
	}
	else if (jednostka_zamienna == "megabajt")
	{
		zamieniona = rozmiar;
	}
	else if (jednostka_zamienna == "gigabajt")
	{
		zamieniona = rozmiar / 1024;
	}
	else if (jednostka_zamienna == "terabajt")
	{
		zamieniona = rozmiar / 1024 / 1024;
	}

	return zamieniona;
}

int zamiana_gigabajt(int rozmiar, string jednostka_zamienna)
{
	int zamieniona;
	if (jednostka_zamienna == "bit")
	{
		zamieniona = rozmiar * 8 * 1024 * 1024 * 1024;
	}
	else if (jednostka_zamienna == "bajt")
	{
		zamieniona = rozmiar * 1024 * 1024 * 1024;
	}
	else if (jednostka_zamienna == "kilobajt")
	{
		zamieniona = rozmiar * 1024 * 1024;
	}
	else if (jednostka_zamienna == "megabajt")
	{
		zamieniona = rozmiar * 1024;
	}
	else if (jednostka_zamienna == "gigabajt")
	{
		zamieniona = rozmiar;
	}
	else if (jednostka_zamienna == "terabajt")
	{
		zamieniona = rozmiar / 1024;
	}

	return zamieniona;
}

int zamiana_terabajt(int rozmiar, string jednostka_zamienna)
{
	int zamieniona;
	if (jednostka_zamienna == "bit")
	{
		zamieniona = rozmiar * 8 * 1024 * 1024 * 1024 * 1024;
	}
	else if (jednostka_zamienna == "bajt")
	{
		zamieniona = rozmiar * 1024 * 1024 * 1024 * 1024;
	}
	else if (jednostka_zamienna == "kilobajt")
	{
		zamieniona = rozmiar * 1024 * 1024 * 1024;
	}
	else if (jednostka_zamienna == "megabajt")
	{
		zamieniona = rozmiar * 1024 * 1024;
	}
	else if (jednostka_zamienna == "gigabajt")
	{
		zamieniona = rozmiar * 1024;
	}
	else if (jednostka_zamienna == "terabajt")
	{
		zamieniona = rozmiar;
	}

	return zamieniona;
}
