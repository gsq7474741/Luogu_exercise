//#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
	int k;
	double s;
	int n;
	n = 0;
	s = 0;
	n = 0;
	cin >> k;
	for (double i = 0; i < 100000000; i++) {
		s = s + (1 / (i + 1));
		n++;
		if (s > k) {
			break;
		}
	}
	cout << n;

	//system("pause");

	return 0;
}