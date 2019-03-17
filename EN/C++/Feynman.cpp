//	https://www.spoj.com/problems/SAMER08F/

#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int y = 1;
	vector<int> out;

	while (y!=0)
	{
		cin >> y;
		int result = 0;
		for (int i = 1; i <= y; i++)		result = result + (i*i);
		out.push_back(result);
	}
	cout << endl;
	for (int i = 0; i < out.size()-1; i++) cout << out[i] << endl;

	system("PAUSE");
	return 0;
}
