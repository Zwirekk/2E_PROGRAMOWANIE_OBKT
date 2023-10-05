#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Wprowadz pierwsza liczbe: ";
    cin >> x;
    cout << "Wprowadz druga liczbe: ";
    cin >> y;
    cout << "Wprowadz trzecia liczbe: ";
    cin >> z;
    if(x < y && x < z) 
        cout << x << " jest najmniejsza";
    else if( y < x && y < z)
        cout << y << " jest najmniejsza";
    else if(z < y && z < x)
        cout << z << " jest najmniejsza";
    else
        cout << "liczby sa te same";
    

}
