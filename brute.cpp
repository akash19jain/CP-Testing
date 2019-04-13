//slow solution for finding second smallest element
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int& x : a)
	{
		cin>>x;
	}
	for(int x : a)
	{
		int c_s=0;
		for(int y : a)
		{
			if(y<x)
			{
				++c_s;
			}
		}
		if(c_s==1)
		{
			cout << x;
			cout << "\n";
			return 0;
		}
	}
	
	assert(false);
}
