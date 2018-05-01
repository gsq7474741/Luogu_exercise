#include "stdafx.h"
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

int main() {

	//ifstream cin("F:/testdata.in", ios::_Nocreate);
	string a;
	string at;		//a_trans
	cin >> a;
	
	int sign=0;
	if (a[0] == '-') {
		a.erase(0, 1);
		sign = 1;
	}
	int len = a.size();
	at = a;
	//int

	for (int i = 0; i<len; i++) {
		at[len - 1 - i] = a[i];
	}

	while (true) {
		if (at[0] == 48 && at.size() != 1) {
			at.erase(0, 1);
		}
		else {
			break;
		}
	}

	if (sign == 1) {
		at = '-' + at;
	}



	cout << at;


	//system ("pause");


	return 0;
}