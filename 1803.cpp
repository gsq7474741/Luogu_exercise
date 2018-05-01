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

struct sai {
	int s, e;
	sai(int s = 0, int e=0):s(s),e(e){}
};

istream& operator >>(istream& i, sai &s) {
	i >> s.s >> s.e;
	return i;
}

bool operator < (const sai& a, const sai& b) {
	if (a.e == b.e)
		return a.s  < b.s;
	return a.e < b.e;
}

int len(sai a) {
	return a.e - a.s;
}

int main() {
	int n;
	vector<sai> cp;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		sai t;
		cin >> t;
		cp.push_back(t);
	}
	sort(cp.begin(), cp.end());
	int nw = 0, res = 0;
	sai ifn(9999999,9999999);
	cp.push_back(ifn);

	for (int i = 0; i < n; i++) {
		if (cp[i].s >= nw) {
			
				nw = cp[i].e;
				res++;
			
		}
	}

	cout << res;
	return 0;
}