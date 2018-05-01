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
	
	int n;
	cin >> n;
	vector<int>a(n);
	vector<int>b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++) {
		int ans = 0;
			for (int j = 0; j < i ; j++) {
				if (a[j] < a[i])
					ans++;
			}
			b[i] = ans;
	}
	for (int i = 0; i < n; i++)
		cout << b[i]<<" ";

	//system("pause");

	return 0;
}