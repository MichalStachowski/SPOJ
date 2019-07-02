// www.spoj.com/problems/CSUMQ

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int numberOfIntegersInTheList = 0;
	vector<int> array;
	vector<int> output;
	cin >> numberOfIntegersInTheList;
	for (int i = 0; i < numberOfIntegersInTheList; i++)
	{
		int x;
		cin >> x;
		array.push_back(x);
	}

	int test_cases = 0;
	cin >> test_cases;
	for (int i = 0; i < test_cases; i++)
	{
		int first=0, second=0, result=0;
		cin >> first >> second;
		for (int j = first; j <= second; j++)
		{
			result = array[j] + result;
		}
		output.push_back(result);
	}

	for (int i = 0; i < test_cases; i++)
	{
		cout << output[i] << endl;
	}
 
	return 0;
}

