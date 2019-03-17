//	https://pl.spoj.com/problems/FR_08_02/

#include<iostream>
using namespace std;

int main()
{
	unsigned int testowa;
	unsigned int ws;		// wygrane Stasia
	unsigned int ps;		// przegrane Stasia
	unsigned int ww;		// wygrane Wiesia
	unsigned int pw;		// przegrane Wiesia
	unsigned int wg;		// wygrane Grzesia
	unsigned int pg;		// przegrane Grzesia
	unsigned int liczba_rund;
	unsigned int wj;
	unsigned int pj;

	
	cin >> testowa;
	unsigned int Wyniki_wyg[1001];
	unsigned int Wyniki_przeg[1001];
	
	for (int i=0; i<testowa; i++)
	{
		cin>>ws>>ps>>ww>>pw>>wg>>pg;
		liczba_rund=(ws+ps)*2;
		Wyniki_wyg[i]=liczba_rund-(ws+ww+wg);
		Wyniki_przeg[i]=liczba_rund-(ps+pw+pg);
	}
	for (int i=0; i<testowa; i++)
	{
		cout << Wyniki_wyg[i];
		cout << " ";
		cout << Wyniki_przeg[i];
		cout << endl;
	}
	
	return 0;
}
