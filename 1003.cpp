//#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<vector<int>> c;

int main() {
	//ifstream cin("F:/testdata.in", ios::_Nocreate);
	int n, a, b, g, k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> g >> k;
		c.push_back({ a,b,g,k });
	}
	int x, y,r=-1;
	cin >> x >> y;
	for (int i = 0; i < c.size(); i++) {
		if (c[i][0] == -1)
			continue;
		if (c[i][0] <= x && c[i][0] + c[i][2] >= x)
			if (c[i][1] <= y && c[i][1] + c[i][3] >= y)
				r = i+1;
	}
	cout << r;
	return 0;
}
