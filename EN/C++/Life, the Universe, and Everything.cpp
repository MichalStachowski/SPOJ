//	https://www.spoj.com/problems/TEST/

#include<iostream>
using namespace std;
int main()
{
	int *wart = new int[100];
	int i=1;
	cin >> wart[0];
	if (wart[0]==42) return 0;
	
		do
		{
			cin >> wart[i];
			if(wart[i]==42) break;
			i++;
		}
		while(true);
	
	
	for(int k=0; k<i; k++) cout << wart[k] << endl;
	
	
	return 0;
}
