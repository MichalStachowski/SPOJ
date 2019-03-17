//	https://pl.spoj.com/problems/PP0501A/

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int ile_testow;
	cin >> ile_testow;
	int s1[ile_testow], s2[ile_testow], nwd[ile_testow];
	
	for (int i=0; i<ile_testow; i++)
	{
		cin >> s1[i] >> s2[i];
		while (s1[i]!=s2[i])
		{
			if (s2[i]>s1[i]) swap(s1[i], s2[i]);
			s1[i]=s1[i]-s2[i];
		}
		nwd[i]=s1[i];
	}
	for (int i=0; i<ile_testow; i++) cout << nwd[i] << endl;
	
	
	return 0;
}
