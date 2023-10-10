#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	unordered_map<string, string> loginHaslo;
	string login, haslo;

	loginHaslo["login1"] = "haslo1";
	loginHaslo["login2"] = "haslo2";
	loginHaslo["login3"] = "haslo3";

	int probylogin = 3;
	int probyhaslo = 3;
	while (probylogin > 0 && probyhaslo > 0) {
		cout << "Podaj nazwe uzytkownika: ";
		cin >> login;

		if (loginHaslo.find(login) != loginHaslo.end()) {
			while (probyhaslo > 0) {
				cout << "Podaj haslo: ";
				cin >> haslo;

				if (loginHaslo[login] == haslo) {
					cout << "Zalogowana jako " << login << endl;
					goto exit;
				}
				else {
					cout << "Nieprawidlowe haslo" << endl; probyhaslo--;
				}
			}
		}
		else {
			cout << "Nieprawidlowa nazwa uzytkownika." << endl; probylogin--;
		}	
	}

	if (probylogin == 0 || probyhaslo == 0) {
		cout << "Przekroczono limit prob zalogowania!";
	}
exit:
	return 0;

}
