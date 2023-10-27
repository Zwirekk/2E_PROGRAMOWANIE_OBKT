#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    int tab[1000];
    int ujemne = 0;
    int dodatnie = 0;
    int parzyste = 0;
    int nieparzyste = 0;

    while (n < 1000)
    {
        cout << "Podaj liczbe: ";
        cin >> tab[n];

        if (tab[n] < 0)
        {
            ujemne++;
            if (ujemne >= 10)
            {
                cout << "Wprowadzono 10 liczb ujemnych" << endl;
                break; 
            }
        }
        else if (tab[n] % 2 == 0)
        {
            parzyste++;
        }
        else if (tab[n] % 2 == 1)
        {
            nieparzyste++;
        }
        else if (tab[n] > 0)
        {
            dodatnie++;
        }

        if (n > 0 && tab[n] == tab[n - 1])
        {
            cout << "Dwie kolejne liczby sa takie same" << endl;
            break;
        }

        m += tab[n];
        n++;
    }

    if (n > 0)
    {
        cout << "Ostatnia podana liczba: " << tab[n - 1] << ", podano ujemnych: " << ujemne << ", dodatnich: " << dodatnie << ", parzystych: " << parzyste << ", nieparzystych: " << nieparzyste << endl;
    }
    else
    {
        cout << "Brak danych do analizy." << endl;
    }

    return 0;
}
