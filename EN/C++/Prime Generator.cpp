//	https://www.spoj.com/problems/PRIME1/

#include<iostream>
#include <vector>
#include<cmath>
using namespace std;

bool is_prime(int x)
{
	if (x < 2) return false;
	else
	{
		for (int j = 2; j <= sqrt(x); j++)
		{
			if (x%j == 0)
			{
				return false;
				break;
			}
		}
		return true;
	}
}

int main()
{
	const int size = 10;
	int x = 0;
	int num_of_tests = 0;
	int first = 0, last = 0;
	cin >> num_of_tests;

	vector<int> f;				//first
	vector<int> l;				//last
	vector<int> r;				//result


	for (int i = 0; i < num_of_tests; i++)
	{
		cin >> first >> last;
		f.push_back(first);
		l.push_back(last);
	}

	for (int k = 0; k < num_of_tests; k++)
	{
		for (int i = f[k]; i <= l[k]; i++)
		{
			if (is_prime(i))
			{			
				r.push_back(i);
				cout << r[x] << endl;
				x++;
			}
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
}
