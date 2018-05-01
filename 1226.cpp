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

long long int b, p, k;
long long int s = 0;

ll quickpow(ll bb, ll pp, ll kk) {
	if (pp == 1) {
		return bb % kk;
	}
	ll r = quickpow(bb, pp / 2, kk);
	ll ret = (r * r) % k;
	if (pp % 2 == 1)
		ret = (ret % kk * bb % kk) % kk;
	return ret;
}



int main() {

	//ifstream cin("F:/testdata.in", ios::_Nocreate);
	cin >> b >> p >> k;
	long long int mo;
	mo = b % k;
	ll d = quickpow(mo, p, k);

	cout <<b<<"^"<<p<<" mod "<<k<<"="<<d;


	//system ("pause");

	return 0;
}