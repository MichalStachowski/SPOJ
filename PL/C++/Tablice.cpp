//	https://pl.spoj.com/problems/PP0502B/

#include<iostream>
using namespace std;
int main()
{	
	const int N=100;

	int ile_testow;
	int *rozmiar = new int[100];
	int tablica_podawana[100][100];
	
	int *wsk;
	wsk = new int[N];
	
	cin >> ile_testow;
	for(int i=0; i<ile_testow; i++)
	{
		cin >> rozmiar[i];
		for (int j=0; j<rozmiar[i]; j++)
		{
			cin >> tablica_podawana[i][j];		
		}
	}
	
	for(int i=0; i<ile_testow; i++)
	{	
		for (int j=rozmiar[i]-1; j>=0; j--)
		{
			cout << tablica_podawana[i][j] << " ";
		}
		cout << endl;
	}
	delete [] rozmiar;
	return 0;
}
