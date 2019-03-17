//	https://pl.spoj.com/problems/PA05_POT/

#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int ile_testow;
	long long *a = new long long[10];
	long long *b = new long long[10];
	long long *wynik = new long long[10];
	cin >> ile_testow;
	if (ile_testow>10)
	{
		return 0;
	}
	
	for (int i=0; i<ile_testow; i++)
	{
		cin >> a[i] >> b[i];
		
		if(a[i]%10==2)
		{
			if(b[i]%4==1) wynik[i]=2;
			else if(b[i]%4==2) wynik[i]=4;
			else if(b[i]%4==3) wynik[i]=8;
			else if(b[i]%4==0) wynik[i]=6;
		}
		else if(a[i]%10==3)
		{
			if(b[i]%4==1) wynik[i]=3;
			else if(b[i]%4==2) wynik[i]=9;
			else if(b[i]%4==3) wynik[i]=7;
			else if(b[i]%4==0) wynik[i]=1;
		}
		else if(a[i]%10==4)
		{
			if(b[i]%2==1) wynik[i]=4;
			else if(b[i]%2==0) wynik[i]=6;			
		}
		else if(a[i]%10==5) wynik[i]=5;
		else if(a[i]%10==6) wynik[i]=6;
		else if(a[i]%10==7)
		{
			if(b[i]%4==1) wynik[i]=7;
			else if(b[i]%4==2) wynik[i]=9;
			else if(b[i]%4==3) wynik[i]=3;
			else if(b[i]%4==0) wynik[i]=1;
		}
		else if(a[i]%10==8)
		{
			if(b[i]%4==1) wynik[i]=8;
			else if(b[i]%4==2) wynik[i]=4;
			else if(b[i]%4==3) wynik[i]=2;
			else if(b[i]%4==0) wynik[i]=6;
		}
		else if(a[i]%10==9)
		{
			if(b[i]%2==1) wynik[i]=9;
			else if(b[i]%2==0) wynik[i]=1;			
		}
		else if(a[i]%10==0) wynik[i]=0;
		else
		{
			wynik[i]=pow(a[i], b[i]);
			wynik[i]=wynik[i]%10;
		}	
	}
	
	for (int i=0; i<ile_testow; i++)
	{
		cout << wynik[i] << endl;
	}
	
	delete [] a;
	delete [] b;
	delete [] wynik;
	return 0;
}
