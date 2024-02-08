#include <iostream>
using namespace std;

double zamianakmmile(double km);
double zamianamilekm(double mila);
double zamianakmhms(double kmh);
double zamianamskmh(double ms);
double zamianaCF(double C);
double zamianaFC(double F);

int main()
{
	double km, mila, kmh, ms, C, F;
	string jednostka;
	do
	{
		cout << "km = kilometr na mile\nmila = mila na kilometry\nkmh = km/h na m/s\nms = m/s na km/h\nC = stopnie Celcjusza na Fahrenheita\nF = stopnie Fahrenheita na Celcjusza\nPodaj jaka jednostke chcesz zamienic: ";
		cin >> jednostka;
	} while (jednostka != "km" && jednostka != "mila" && jednostka != "kmh" && jednostka != "ms" && jednostka != "C" && jednostka != "F");

	if (jednostka == "km")
	{
		cout << "Podaj ilosc kilometrow: ";
		cin >> km;
		cout << km << " to " << zamianakmmile(km) << " mil";
	}
	else if (jednostka == "mila")
	{
		cout << "Podaj ilosc mil: ";
		cin >> mila;
		cout << mila << " to " << zamianamilekm(mila) << " kilometrow";
	}
	else if (jednostka == "kmh")
	{
		cout << "Podaj ilosc km/h: ";
		cin >> kmh;
		cout << kmh << " km/h to " << zamianakmhms(kmh) << " m/s";
	}
	else if (jednostka == "ms")
	{
		cout << "Podaj ilosc m/s: ";
		cin >> ms;
		cout << ms << " m/s to " << zamianamskmh(ms) << " km/h";
	}
	else if (jednostka == "C")
	{
		cout << "Podaj ilosc stopni: ";
		cin >> C;
		cout << C << "C to " << zamianaCF(C) << "F";
	}
	else if (jednostka == "F")
	{
		cout << "Podaj ilosc stopni: ";
		cin >> F;
		cout << F << "F to " << zamianaFC(F) << "C";
	}

}

double zamianakmmile(double km)
{
	double mila = km * 0.6214;

	return mila;
}

double zamianamilekm(double mila)
{
	double km = mila * 1.609344;

	return km;
}

double zamianakmhms(double kmh)
{
	double ms = kmh / 3.6;

	return ms;
}

double zamianamskmh(double ms)
{
	double kmh = ms * 3.6;

	return kmh;
}

double zamianaCF(double C)
{
	double F = C * 1.8 + 32;

	return F;
}

double zamianaFC(double F)
{
	double C = (F - 32) * 5 / 9;

	return C;
}