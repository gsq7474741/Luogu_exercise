//#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const vector<vector<vector<ll>>> r0(30, vector<vector<ll>>(30, vector<ll>(30, -1)));
vector<vector<vector<ll>>> mem(30, vector<vector<ll>>(30, vector<ll>(30,-1)));


ll w(ll a, ll b, ll c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	if (a > 20 || b > 20 || c > 20) {
		return w(20, 20, 20);
	}
	if (mem[a][b][c] != -1)
		return mem[a][b][c];
	else if (a < b&&b < c) {
		mem[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		return w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	}
	else {
		mem[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
		return  w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}
}



int main() {
	//ifstream cin("F:/testdata.in", ios::_Nocreate);
	ll a, b, c;
	while (cin >> a >> b >> c) {
		if (a == -1 && b == -1 && c == -1)
			break;
		cout << "w("<<a<<", "<<b<<", "<<c<<") = "<<w(a, b, c)<<endl;
		mem = r0;
	}
	return 0;
}
