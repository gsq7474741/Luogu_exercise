//#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
	double x;
	double s=0;
	double q = 2;
	int p = 0;
	cin >> x;
	for (int i = 0; i < 100000000; i++) {
		s = s + q;
		q = q * 0.98;
		p = i+1;
		if (s >= x) {
			break;
		}
	}
	cout << p;


	//system("pause");

	return 0;
}