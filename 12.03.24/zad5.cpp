#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	float bok_a, bok_b, bok_c, pole;

	printf("Podaj dlugosc boku a: ");
	scanf_s("%f", &bok_a);
	printf("Podaj dlugosc boku b: ");
	scanf_s("%f", &bok_b);
	printf("Podaj dlugosc boku c: ");
	scanf_s("%f", &bok_c);

	pole = sqrt(((bok_a + bok_b + bok_c) / 2) * ((((bok_a + bok_b + bok_c) / 2)) - bok_a)* ((((bok_a + bok_b + bok_c) / 2)) - bok_b) * ((((bok_a + bok_b + bok_c) / 2)) - bok_c));

	printf("Pole trojkata to: %5.2f\n", pole);

}
