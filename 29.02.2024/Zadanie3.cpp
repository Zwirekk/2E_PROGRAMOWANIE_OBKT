#include <iostream>

using namespace std;

void pobierzLancuch(string& lancuch)
{
    cin >> lancuch;
}

void sumaLancuchow(string lancuch1, string lancuch2, string lancuch3, string& lancuch4)
{
    lancuch4 = lancuch1 + " " + lancuch2 + " " + lancuch3;
}

void wyswietlLancuch(string lancuch) {
    cout << lancuch << endl;
}

int main()
{
    string pierwszyCzlon = "", drugiCzlon = "", trzeciCzlon = "";
    string calosc = "";
    
    cout << "Podaj pierwszy czlon: ";
    pobierzLancuch(pierwszyCzlon);
    
    cout << "Podaj drugi czlon: ";
    pobierzLancuch(drugiCzlon);
    
    cout << "Podaj trzeci czlon: ";
    pobierzLancuch(trzeciCzlon);
    
    sumaLancuchow(pierwszyCzlon, drugiCzlon, trzeciCzlon, calosc);
    
    cout << "Calosc: ";
    wyswietlLancuch(calosc);
}