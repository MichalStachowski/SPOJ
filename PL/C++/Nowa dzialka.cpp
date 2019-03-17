//	https://pl.spoj.com/problems/MWPZ06X/

using namespace std;
#include<iostream>
#include<vector>

int main()
{
	int ile_testow = 0;
	int bok = 0;
	vector<int> powierzchnia;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> bok;
		powierzchnia.push_back(bok*bok);
	}
	for (int i = 0; i < ile_testow; i++) cout << powierzchnia[i] << endl;

	system("PAUSE");
    return 0;
}


