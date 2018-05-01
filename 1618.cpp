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

using namespace std;
typedef long long ll;

bool ck(int a, int b) {
	int a1, a2, a3, b1, b2, b3;
	a1 = a / 100;
	a2 = a / 10 % 10;
	a3 = a % 10;
	b1 = b / 100;
	b2 = b / 10 % 10;
	b3 = b % 10;
	if (a1==b1 || a1==b2 || a1==b3 || a2==b1 || a2==b2 || a2==b3 || a3==b1 || a3==b2 || a3==b3)
		return true;
	return false;
}

bool c0(int a) {
	int a1, a2, a3;
	a1 = a / 100;
	a2 = a / 10 % 10;
	a3 = a % 10;
	if (a1 == 0 || a2 == 0 || a3 == 0)
		return true;
	return false;
}

int main() {
	int x, y, z, s=0;
	cin >> x >> y >> z;
	for (int i = 122; i < 999; i++) {
		if (i / 100 == i / 10 % 10 || i / 100 == i % 10 || i / 10 % 10 == i % 10 || c0(i))
			continue;
		for (int j = 122; j < 999; j++) {
			if (j / 100 == j / 10 % 10 || j / 100 == j % 10 || j / 10 % 10 == j % 10||c0(j))
				continue;
			if (i*y != j * x)
				continue;
			if (ck(i, j))
				continue;
			for (int k = 122; k < 999; k++) {
				if (k / 100 == k / 10 % 10 || k / 100 == k % 10 || k / 10 % 10 == k % 10 || c0(k))
					continue;
				if (i*z != k * x||j*z!=k*y)
					continue;
				if (ck(i, k))
					continue;
				if (ck(k, j))
					continue;
				cout << i << " " << j << " " << k << endl;
				s++;
			}
		}
	}
	if (s == 0)
		cout << "No!!!";

	return 0;
}