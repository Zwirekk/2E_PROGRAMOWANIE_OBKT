#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Wprowadz liczbe: ";
    cin >> x;
    if(x % 2==0) 
        cout << "Liczba " << x << " jest parzysta";
    else
        cout << "Liczba " << x << " nie jest parzysta";
}