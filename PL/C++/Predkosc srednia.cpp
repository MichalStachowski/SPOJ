//	https://pl.spoj.com/problems/VSR/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int ile_testow = 0;
	cin >> ile_testow;
	int v1 = 0, v2 = 0;
	vector<int> wyniki;
	int wynik = 0;
	for (int i = 0; i < ile_testow; i++)
	{
		cin >> v1 >> v2;
		wynik = (2 * v1*v2) / (v1 + v2);
		wyniki.push_back(wynik);
	}
	for (int i = 0; i < ile_testow; i++)	cout << wyniki[i] << endl;
	system("PAUSE");
	return 0;
}

