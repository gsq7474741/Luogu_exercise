//#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	int a[12] = { 288,
		339,
		342,
		2,
		39,
		245,
		99,
		269,
		92,
		167,
		198,
		61
	};
	int k,q,p,s,f = 0;
	int m[12] = { 0 };
	k = q = p = s = 0;
#if 0
	for (int i = 0; i<12; i++) {
		cin >> a[i];
	}
#endif
	for (int i = 0; i < 12; i++) {
		k = k + 300;
		p = k - a[i];
		if (p >= 0) {
			s = s + p / 100;
			k = k - (p / 100) * 100;
		}
		if (p < 0) {
			m[i]++;
		}
		k = k - a[i];
		p = 0;
	}
	for (int i = 0; i < 12; i++) {
		if (m[i] == 1) {
			q = i + 1;
			break;
		}
	}
	if (q != 0) {
		cout << q * -1;
	}
	if (q == 0) {
		//f = k + 120 * p;
		cout << k+120*s;
	}
	//system("pause");
	return 0;
}