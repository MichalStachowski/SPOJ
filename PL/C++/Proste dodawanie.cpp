//	https://pl.spoj.com/problems/RNO_DOD/

#include<iostream>
using namespace std;
int main()
{
	int ile_testow;
	int ile_w_rzedzie;
	int elementy_wiersza[100];
	int suma_tab[100];
	int suma=0;
	
	cin >> ile_testow;
	for(int i=0; i<ile_testow; i++)
	{
		cin >> ile_w_rzedzie;
		for (int j=0; j<ile_w_rzedzie; j++)
		{
			cin >> elementy_wiersza[i];
			suma = suma+elementy_wiersza[i];
			suma_tab[i] = suma;

		}
		suma=0;
	}
	for (int i=0; i<ile_testow; i++)
	{
		cout << suma_tab[i] << endl;
	}
		
	return 0;
}
