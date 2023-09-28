#include <iostream>

using namespace std;

int main()
{
    cout << "Menu: \n1 - dodawanie\n2 - odejmowanie\n3 - mnozenie\n4 - dzielenie\n0 - koniec\n";
    
    int liczba1, liczba2, wynik, koniec;
    int dzialanie = 1;
    
        cout << "Wprowadz liczbe: ";
        cin >> liczba1;
    do {
        cout << "Wprowadz dzialanie: ";
        cin >> dzialanie;
         if(dzialanie == 0) {
            break;
        }
        if(dzialanie > 4 || dzialanie < 1) {
            do {
            cout << "Wprowadz poprawne dzialanie: ";
            cin >> dzialanie;
            }while(dzialanie > 4 || dzialanie <= 0);
        }
        
        cout << "Wprowadz druga liczbe: ";
        cin >> liczba2;
        if(dzialanie == 1) {
            cout << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2 << "\n";
            liczba1 = liczba1 + liczba2;
        }
        else if(dzialanie == 2) {
            cout << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2 << "\n";
            liczba1 = liczba1 - liczba2;
        }
         else if(dzialanie == 3) {
            cout << liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2 << "\n";
            liczba1 = liczba1 * liczba2;
        }
         else if(dzialanie == 4) {
            cout << liczba1 << " / " << liczba2 << " = " << liczba1 / liczba2 << "\n";
            liczba1 = liczba1 / liczba2;
        }
        cout << "Jezeli chcesz zakonczyc wpisz 0, w przeciwnym wypadku wpisz inne dzialanie: ";
        cin >> dzialanie;
        if(dzialanie == 0) {
            break;
        }
        else {
        cout << "Jezeli chcesz kontynuowac z wynikiem wpisz 1, jezeli zresetowac wpisz 2: ";
        cin >> koniec;
        if(koniec == 2){
            cout << "Wpisz pierwsza liczbe: ";
            cin >> liczba1;
        }}
    }while(dzialanie != 0);
    
    return 0;
}
