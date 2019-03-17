//	https://www.spoj.com/problems/ADDREV/

#include<iostream>
#include<vector>
#include<string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	int ile_testow = 0;
	string x;
	string y;
	string odwrocona_suma;
	int suma = 0;
	char *temp;
	int l1 = 0, l2 = 0, l3=0;
	vector<int> wynik;


	cin >> ile_testow;
	for (int i = 0; i < ile_testow; i++)
	{
		cin >> x;		cin >> y;
		reverse(x.begin(), x.end());		reverse(y.begin(), y.end());
		l1 = atoi(x.c_str());	l2 = atoi(y.c_str());
		suma = l1 + l2;
		string odwrocona_suma = to_string(suma);
		reverse(odwrocona_suma.begin(), odwrocona_suma.end());
		l3 = atoi(odwrocona_suma.c_str());
		wynik.push_back(l3);
	}

	for (int i = 0; i < ile_testow; i++) cout << wynik[i] << endl;

	system("PAUSE");
	return 0;
}
