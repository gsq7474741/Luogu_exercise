//#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iterator>
#include <functional>
#include <sstream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <stack>

using namespace std;
typedef long long ll;

int n, k, ans = 0;
vector<int> x;

bool pn_check(int p) {
	for (int i = 2; i <= sqrt(p); i++) { //n^0.5
		if (p % i == 0)
			return false;
	}
	return true;
}

void dfs(int d, int s, int nw) {
	if (d == n + 1 || nw == k) {
		if (pn_check(s) && nw == k)
			ans++;
		return;
	}
	dfs(d + 1, s + x[d], nw + 1);
	dfs(d + 1, s, nw);
	return;
}


int main() {
	cin >> n >> k;
	x.resize(n+1);
	for (size_t i = 1; i <= n; i++)
	{
		cin >> x[i];
	}
	dfs(1, 0, 0);
	cout << ans;

	return 0;
}