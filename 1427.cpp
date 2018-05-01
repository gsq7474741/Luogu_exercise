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
using namespace std;


int main() {
	int a[100];
	int t=0;
	for (int i = 0; i < 100; i++) {
		cin >> a[i];
		t++;
		if (a[i] == 0)
			break;
	}
	for (int i = t - 2; i >= 0; i--) {
		cout << a[i] << " ";
	}
	//cout << t;

	//system("pause");

	return 0;
}