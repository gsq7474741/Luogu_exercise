//#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {

	int x, n;
	cin >> x >> n;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (x != 6 && x != 7) {
			s = s + 250;
		}
		x++;
		if (x == 8) {
			x = 1;
		}
	}
	cout << s;
	//system("pause");

	return 0;
}