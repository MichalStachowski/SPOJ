//	https://pl.spoj.com/problems/PRZEDSZK/

#include<iostream>
using namespace std;
int main()
{
	int ile_testow;
	int *w1 = new int[100];
	int *w2 = new int[100];
	int *wynik = new int[100];
	
	cin >> ile_testow;
	for(int i=0; i<ile_testow; i++)
	{
		int znaleziono=0;
		int nww=1;
		cin>> w1[i] >> w2[i];
		if(w1[i]==0||w2[i]==0) wynik[i]=0;
		else
		{
			do
			{
				if(nww%w1[i]==0 && nww%w2[i]==0) 
				{
					wynik[i]=nww;
					znaleziono++;
				}
				else nww++;
			}
			while(znaleziono!=1);
		}		
	}
	
	for(int i=0; i<ile_testow; i++) cout << wynik[i] << endl;
	

	delete [] w1;
	delete [] w2;
	delete [] wynik;

}
