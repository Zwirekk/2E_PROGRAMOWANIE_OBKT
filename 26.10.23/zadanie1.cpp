#include <iostream>

using namespace std;

int main()
{
    int i = 0, tab[31], liczba;
    
    cout << "Podaj liczbę: ";
    cin >> liczba;
    
    while(liczba != 0)
    {
        tab[i++] = liczba % 2;
        liczba /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << tab[j];
    }
}
