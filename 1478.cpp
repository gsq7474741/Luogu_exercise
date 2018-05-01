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


struct apl {		//define apple
	int x, y;
	apl(int x = 0, int y = 0) :x(x), y(y) {}
};

istream& operator >> (istream& i, apl &p) {		//overload >>
	i >> p.x >> p.y;
	return i;
}

bool operator < (const apl& a, const apl& b) {		//overload <
	if (a.y < b.y) {
		return true;
	}
	if (a.y == b.y) {
		return a.x < b.x;
	}
	return a.y < b.y;
}


int main() {
	vector<apl> app;
	int n, s, a, b, h, ans=0;
	cin >> n >> s;
	cin >> a >> b;
	h = a + b;
	for (int i = 0; i < n; i++)		//input vector<apple>
	{
		apl t;
		cin >> t;
		app.push_back(t);
	}
	sort(app.begin(), app.end());

	for (int i = 0; i < n; i++) {
		if (app[i].x <= h && s >= app[i].y) {
			s -= app[i].y;
			ans++;
		}
	}
	cout << ans;

	return 0;
}