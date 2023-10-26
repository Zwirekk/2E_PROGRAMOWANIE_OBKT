#include <iostream>

using namespace std;

int main() {
    int liczba_rzutow, liczba_powtorzen;
    srand(time(NULL));
    
    
    cout << "Podaj liczbe rzutow: ";
    cin >> liczba_rzutow;
    liczba_powtorzen = 1;
    
    while(liczba_rzutow != 0)
    {
        cout << liczba_powtorzen << " rzut: "<< (rand() % 6) + 1 << endl;
        liczba_rzutow--;
        liczba_powtorzen++;
    }
}
