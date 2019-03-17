//	https://www.spoj.com/problems/FCTRL/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	unsigned long long x1 = 1;
	int y1 = 1;
	int y = 0;
	vector<int> input;
	vector<int> output;
	
	int how_many = 0;
	int counter = 0;

	cin >> how_many;
	
	for (int i = 0; i < how_many; i++)
	{
		cin >> x1;
		input.push_back(x1);
	}
	output.resize(0);
	for (int i = 0; i < how_many; i++)
	{
		counter = 1;
		while (input[i]>=(pow(5, counter)))
		{			
			y1 = input[i] / (pow(5,counter));
			y = y + y1;
			counter++;
		}
		output.push_back(y);
		y = 0;
	}
	cout << endl;
	for (int i = 0; i < how_many; i++)	cout << output[i] << endl;
	system("PAUSE");
    return 0;
}
