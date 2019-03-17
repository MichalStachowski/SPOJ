//	https://pl.spoj.com/problems/FCTRL3/

#include<iostream>
using namespace std;


int main()
{

	 int ile_testow;
	 int liczba;
	int dziesiatek[30];
	int jednosci[30];
	
	
	cin >> ile_testow;
	for (int k=0; k<ile_testow; k++)
	{
		cin >> liczba;
		
		if ((liczba==1) || liczba==0)
		{
			dziesiatek[k]=0;
			jednosci[k]=1;
		}
		else if(liczba==2)
		{
			dziesiatek[k]=0;
			jednosci[k]=2;
		}
		else if(liczba==3)
		{
			dziesiatek[k]=0;
			jednosci[k]=6;
		}
		else if(liczba==4)
		{
			dziesiatek[k]=2;
			jednosci[k]=4;
		}
		else if(liczba==5)
		{
			dziesiatek[k]=2;
			jednosci[k]=0;
		}				
		else if(liczba==6 || liczba==8)
		{
			dziesiatek[k]=2;
			jednosci[k]=0;
		}
		else if(liczba==7)
		{
			dziesiatek[k]=4;
			jednosci[k]=0;
		}
		else if(liczba==9)
		{
			dziesiatek[k]=8;
			jednosci[k]=0;
		}
		else
		{
			dziesiatek[k]=0;
			jednosci[k]=0;
		}						
	}

	for (int k=0; k<ile_testow; k++)
	{
		cout << dziesiatek[k] << " " << jednosci[k] << endl;
	}	
	
	return 0;
}
