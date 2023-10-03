#include <iostream>
using namespace std;

int main() {
	int a, b, c, wyraz;
	cout << "Wprowadz pierwszy bok trojkatu: ";
	cin >> a;
	cout << "Wprowadz drugi bok trojkatu: ";
	cin >> b;
	cout << "Wprowadz trzeci bok trojkatu: ";
	cin >> c;
	if (a == 0 || b == 0 || c == 0)
		cout << "Blad, wprowadzono wartosc zero";
	else
		if (a + b > c && a + c > b && b + c > a)
			cout << "Z podanych dlugosci da zrobic sie trojkat";
		else
			cout << "Z podanych dlugosci nie da zrobic sie trojkat";
}