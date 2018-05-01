//#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	//ifstream cin("F:/testdata.in", ios::_Nocreate);
	queue<int> mem;
	vector<int> v;
	int m, n, x;
	cin >> m >> n;
	int p = 0, i=0;
	while (cin >> x) {
		i++;
		if (find(v.begin(), v.end(), x) != v.end())
			continue;
		else {
			if (v.size() == m)
				v.erase(v.begin());
			v.push_back(x);
			p++;
		}
		if (i == n)
			break;
	}
	cout << p;
	return 0;
}
