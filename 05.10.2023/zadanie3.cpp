#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Wprowadz liczbe w przedziale od 100 do 150: ";
    cin >> x;
    if (x >= 100 && x <= 150)
        cout << "Liczba nalezy do tego przedzialu";
    else
        cout << "Liczba nie nalezy do tego przedzialu";
}