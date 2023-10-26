#include <iostream>

using namespace std;

int main()
{
    int tablica[9];
    int rozmiar = 0;
    
    while(rozmiar < 10)
    {
        cout << "Wprowadz " << rozmiar << " liczbe: ";
        cin >> tablica[rozmiar];
        rozmiar++;
    }
    while(rozmiar > 0)
    {
        rozmiar--;
        cout << tablica[rozmiar] << endl;
    }
}
