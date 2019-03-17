//	https://pl.spoj.com/problems/SUMA/

#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int *tab_suma = new int[201];
	int *skl_suma = new int[201];
	
	tab_suma[0]=0;
	int koniec=0;
	
	for (int i=1; ; i++)
	{
		cin >> skl_suma[i];
		if(abs(skl_suma[i])<101)
		{
			tab_suma[i] = tab_suma[i-1] + skl_suma[i];	
			koniec++;
			if(!cin)
			{
				break;
			}
		}
		else
		{
			break;
		}
	}

	
	for (int k=1;k<koniec ; k++)
	{
		cout << tab_suma[k] << endl;
	}

	
	
	delete [] tab_suma;
	delete [] skl_suma;	
	
	return 0;
}
