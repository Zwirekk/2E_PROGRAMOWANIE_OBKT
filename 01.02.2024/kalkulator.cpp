#include <iostream>
using namespace std;

double dodawanie(double liczba1, double liczba2);
double odejmowanie(double liczba1, double liczba2);
double mnozenie(double liczba1, double liczba2);
double dzielenie(double liczba1, double liczba2);

int main()
{
	double liczba1, liczba2;
	int znak;
	cout << "1 = +, 2 = -, 3 = *, 4 = / \n\n";
	cout << "Podaj pierwsza liczbe: ";
	cin >> liczba1;

	do {
		cout << "Podaj znak: ";
		cin >> znak;
	} while (znak < 1 || znak > 4);

	cout << "Podaj druga liczbe: ";
	cin >> liczba2;

	if (znak == '%' && liczba2 == 0)
	{
		cout << "Nie mozna dzielic przez zero.";
		return 0;
	}

	switch (znak) {
	case 1:
		cout << "Suma dodawanie liczb to: " << dodawanie(liczba1, liczba2);
		break;

	case 2:
		cout << "Roznica odejmowanych liczb to: " << odejmowanie(liczba1, liczba2);
		break;

	case 3:
		cout << "Iloczyn liczb to: " << mnozenie(liczba1, liczba2);
		break;

	case 4:
		cout << "Iloraz liczb to: " << dzielenie(liczba1, liczba2);
		break;
	}
}

double dodawanie(double liczba1, double liczba2)
{
	return liczba1 + liczba2;
}
double odejmowanie(double liczba1, double liczba2)
{
	return liczba1 - liczba2;
}
double mnozenie(double liczba1, double liczba2)
{
	return liczba1 * liczba2;
}
double dzielenie(double liczba1, double liczba2)
{
	return liczba1 / liczba2;
}