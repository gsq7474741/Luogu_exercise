¡¢¡¢#include "stdafx.h"
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





int main() {
	int n;
	cin >> n;
	if (n > 33) {
		cout << 0;
		return 0;
	}
	vector<vector<int>> res;

	for (int a = 1; a <= 3; a++) {
		for (int b = 1; b <= 3; b++) {
			for (int c = 1; c <= 3; c++) {
				for (int d = 1; d <= 3; d++) {
					for (int e = 1; e <= 3; e++) {
						for (int f = 1; f <= 3; f++) {
							for (int g = 1; g <= 3; g++) {
								for (int h = 1; h <= 3; h++) {
									for (int i = 1; i <= 3; i++) {
										for (int j = 1; j <= 3; j++) {
											vector<int> t;
											if (a + b + c + d + e + f + g + h + i + j == n) {
												t.push_back(a);
												t.push_back(b);
												t.push_back(c);
												t.push_back(d);
												t.push_back(e);
												t.push_back(f);
												t.push_back(g);
												t.push_back(h);
												t.push_back(i);
												t.push_back(j);
												res.push_back(t);
											}
											
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	cout << res.size()<<endl;
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < 10; j++) {
			vector<int> t=res[i];
			cout << t[j] << " ";
		}
		cout << endl;
	}

	return 0;
}