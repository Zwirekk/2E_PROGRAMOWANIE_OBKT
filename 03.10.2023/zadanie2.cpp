#include <iostream>

using namespace std;

int main()
{
	/* kwadrat a * a
	trapez a + b * h / 2
	romb a * h
	trojkat a * h / 2
	*/

	int a, b, h, figura;
	cout << "1 = kwadrat\n2 = trapez\n3 = romb\n4 = trojkat\nWprowadz jaka figure chcesz obliczyc: ";
	cin >> figura;
	switch (figura)
	{
		case 1:
			cout << "Wprowadz dlugosc boku kwadratu: ";
			cin >> a;
			cout << "\nPole kwadratu wynosi: " << a * a;
			break;

		case 2:
			cout << "Wprowadz dlugosc pierwszego boku trapezu: ";
			cin >> a;
			cout << "\nWprowadz dlugosc drugiego boku trapezu: ";
			cin >> b;
			cout << "\nWprowadz dlugosc wysokosci trapezu: ";
			cin >> h;
			cout << "\nPole trapezu wynosi: " << (a + b) * h / 2;
			break;

		case 3:
			cout << "Wprowadz dlugosc boku rombu: ";
			cin >> a;
			cout << "\nWprowadz dlugosc wysokosci rombu: ";
			cin >> h;
			cout << "\nPole rombu wynosi: " << a * h;
			break;

		case 4:
			cout << "Wprowadz dlugosc boku trojkata: ";
			cin >> a;
			cout << "\nWprowadz dlugosc wysokosci trojkata: ";
			cin >> h;
			cout << "\nPole trojkata wynosi: " << a * h / 2;
			break;

		default:
			cout << "Wprowadzono napoprawna liczbe";
	}
}