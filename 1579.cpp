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
#include <stack>
using namespace std;
typedef long long ll;

vector<int>pn;
int xx, yy, zz;

bool pn_check(int p) {
	for (int i = 2; i <= sqrt(p); i++) {
		if (p % i == 0)
			return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for (size_t i = 2; i < 20000; i++)
	{
		if (pn_check(i)) {
			//cout << i << endl;
			pn.push_back(i);
		}
	}
	//cout << pn.size();  //2262pn
	
	for (size_t i = 0; i < pn.size()-1; i++)
	{
		int x = pn[i];
		for (size_t j = 0; j < pn.size()-1; j++)
		{
			int y = pn[j];
			for (size_t k = 0; k < pn.size()-1; k++)
			{
				int z = pn[k];
				if (x + y + z == n) {
					xx = x; yy = y; zz = z;
					goto p1;
				}
			}
		}
	}
p1:
	
		cout << xx << " " << yy << " " << zz;
	

	return 0;
}