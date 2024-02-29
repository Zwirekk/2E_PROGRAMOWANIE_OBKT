#include <iostream>
#include <cmath>

using namespace std;

void pole_kola(float pi = 3.14150, float promien = 2)
{
    cout << "pole kola: " << pi * pow(promien, 2) << endl;
}

void obwod_kola(float pi = 3.14150, float promien = 2)
{
    cout << "obwod kola: " << 2 * pi * promien << endl;
}

int main()
{
    pole_kola();
    obwod_kola();
    
    float pi = 3.14;
    float promien = 2;
    
    pole_kola(pi, promien);
    obwod_kola(pi, promien);
}