//	https://pl.spoj.com/problems/CALC/

#include<iostream>
#include<vector>
using namespace std;

vector<int> wynik;

void Kalkulator(char znak[2], int a, int b)
{
	if (znak[0] == 43) wynik.push_back(a + b);
	else if (znak[0] == 45) wynik.push_back(a - b);
	else if (znak[0] == 42) wynik.push_back(a * b);
	else if (znak[0] == 47) wynik.push_back(a / b);
	else if (znak[0] == 37) wynik.push_back(a % b);
}

int main()
{
	char znak[1];
	int a=0, b=0;
	int licznik = 0;
	while (cin >> znak[0] >> a >> b)	Kalkulator(znak, a, b);
	for (int i = 0; i < wynik.size(); i++) cout << wynik[i] << endl;

	system("PAUSE");
	return 0;
}
