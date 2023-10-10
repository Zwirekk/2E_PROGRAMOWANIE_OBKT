#include <iostream>
using namespace std;

int main()
{
	string login = "admin";
	string haslo = "haslo123";
	cout << "Wprowadź login: ";
	cin >> login;
	if (login != "admin") {
		cout << "Niepoprawny login, nie przyznano dostepu!";
		goto exit;
	}
	cout << "Wprowadź hasło: ";
	cin >> haslo;
	if (haslo != "haslo123") {
		cout << "Niepoprawne haslo, nie przyznano dostepu!";
		goto exit;
	}
	cout << "Przyznano dostep";

	exit:
		return 0;
}