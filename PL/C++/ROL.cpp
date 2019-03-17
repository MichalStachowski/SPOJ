//	https://pl.spoj.com/problems/PTROL/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int num_of_tests = 0;
	int x = 0;
	int local_max = 0;
	int global_max = 0;
	int tab1[100][100];			
	int tab2[100][100];
	int tab_counter[100];

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++) { tab1[i][j] = 0; tab2[i][j] = 0; tab_counter[i] = 0; }
	}
	
	cin >> num_of_tests;
	for (int i = 0; i < num_of_tests; i++)
	{
		int j = 0;
		cin >> local_max;
		tab_counter[i] = local_max;
		
		while (j != local_max)
		{
			cin >> x; 		
			tab1[i][j] = x;
			if (j == 0) tab2[i][local_max - 1] = tab1[i][0];	
			if (j >= 1) tab2[i][j-1] = tab1[i][j];
			j++;
		}
		if (local_max > global_max)	global_max = local_max;
	}
	cout << endl;
	for (int i = 0; i < num_of_tests; i++)
	{
		for (int j = 0; j < global_max; j++)
		{
			if (tab2[i][j] == 0 && j >= tab_counter[i]) cout << " ";
			else cout << tab2[i][j] << " ";
		}
		cout << endl;
	}
	
	system("PAUSE");
	return 0;
}
