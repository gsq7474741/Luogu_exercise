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
using namespace std;


int main() {
	int a[10];
	int h;
	int ans = 0;
	for (register int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	cin >> h;
	h += 30;
	for (register int j = 0; j < 10; j++) {
		if (a[j] <= h)
			ans++;
	}
	cout << ans;

	//system("pause");

	return 0;
}