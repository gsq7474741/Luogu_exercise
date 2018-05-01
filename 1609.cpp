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

bool ac(ll at) {
	string a = to_string(at);
	for (int i = 0; i < a.size() / 2; i++) {
		if (a[i] != a[a.size() - 1 - i])
			return false;
	}
	return true;
}

	

int main() {

	//ifstream cin("F:/testdata.in", ios::_Nocreate);
	ll inp ;
	cin >> inp;
	while (1) {
		inp++;
		if (ac(inp)) {
			cout << inp;
			return 0;
		}
	}
	
	/*inp++;
p1:
	string sinp = to_string(inp);
	if (ac(sinp) == false) {
		inp++;
		goto p1;
	}
	else {
		cout << sinp;
	}*/

	//system ("pause");
	//584268232958 16" 6" 3"

	//return 0;
}