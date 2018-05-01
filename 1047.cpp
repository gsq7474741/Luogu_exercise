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
	int l=0 , m=0;
	cin >> l >> m;
	l+=2;
	vector<int>a(l);
	//int *a=new int[l];
	//a = { 0 };
	int sb[2][100] = {0,0};
	for (int i = 0; i < m; i++) {
		cin >> sb[0][i] >> sb[1][i];
	}
	for (int i = 0; i < m; i++) {
		for (int p = sb[0][i]; p <= sb[1][i]; p++)
			a[p]++;
	}
	int ans = -1;
	for (int i = 0; i < l; i++) {
		if (a[i] == 0)
			ans++;
	}
	cout << ans;
	//system("pause");

	return 0;
}