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


int main() {
	
	//ifstream cin("F:/testdata.in", ios::_Nocreate);
	int n;
	cin >> n;
	vector<int>a(n);
	vector<int>b;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int ans = 0;
	//int i = 0;
	int p = 0;
	a.push_back(0);
	
	for (int i = 0; i < n ;i++) {
		if (a[i] < a[i + 1]) {
			p++;
		}
		else {
			b.push_back(p+1);
			p = 0;
		}
	}

	sort(b.begin(), b.end());
	int k = b.size()-1;
	cout << b[k];


	//system("pause");

	return 0;
}