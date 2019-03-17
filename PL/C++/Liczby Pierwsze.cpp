//	https://pl.spoj.com/problems/PRIME_T/

#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

struct czy_pierwsza
{
	char czy_pierwsza[4];
	int liczba;
};

void sprawdzenie(float pierwiastek, czy_pierwsza* tab[], int i, int bylo)
{
	for (int j=2; j<=pierwiastek; j++)
	{
		if ((*tab[i]).liczba%j==0)
		{
			bylo++;
		}

	}
	if (bylo>0)
	{
		strcpy((*tab[i]).czy_pierwsza, "NIE");
	}
	else 
	{
		strcpy((*tab[i]).czy_pierwsza, "TAK");
	}
}

void Dynamiczna_alokacja(czy_pierwsza* tab[], unsigned int &ile_testow, float pierwiastek)
{
	cin >> ile_testow;
	int bylo=0;
	for(int i=0; i<ile_testow; i++)
	{
		tab[i] = new czy_pierwsza;
		cin >> (*tab[i]).liczba;
		if ((*tab[i]).liczba<=3)
		{
			if ((*tab[i]).liczba==1) strcpy((*tab[i]).czy_pierwsza, "NIE");
			if ((*tab[i]).liczba==2) strcpy((*tab[i]).czy_pierwsza, "TAK");
			if ((*tab[i]).liczba==3) strcpy((*tab[i]).czy_pierwsza, "TAK");
		}
		else 
		{
			pierwiastek=sqrt((*tab[i]).liczba);
			sprawdzenie(pierwiastek, tab, i, bylo);
		}
	}
		
}

const unsigned int MAX_TEST=100000;

int main()
{
	czy_pierwsza *tab[MAX_TEST];
	unsigned int ile_testow;
	unsigned int liczba;
	unsigned int bylo=0;
	float pierwiastek;

	Dynamiczna_alokacja(tab, ile_testow, pierwiastek);

	
	for (int i=0; i<ile_testow; i++)
	{
		cout << (*tab[i]).czy_pierwsza << endl;
	}
	return 0;	  	
}

