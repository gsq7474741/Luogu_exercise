//#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
	double n;
	double x1, x2, x3, y1, y2, y3;
	int a[3];
	int b[3];

	cin >> n;
	for (int i = 0; i < 3; i++) {
		cin >> a[i] >> b[i];
	}

	x1 = n / a[0];
	x2 = n / a[1];
	x3 = n / a[2];
	x1=ceil(x1);
	x2=ceil(x2);
	x3=ceil(x3);
	
	y1 = x1 * b[0];
	y2 = x2 * b[1];
	y3 = x3 * b[2];

	int f[3] = { y1,y2,y3 };
	sort(f, f+3);
	cout << f[0];

	//system("pause");
	return 0;
}