#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
//#include <algorithm>
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
	char i[13];
	cin >> i;
	int  check = 0;
	char x = 120;

	check = i[0] - 48 + 2 * (i[2] - 48) + 3 * (i[3] - 48) + 4 * (i[4] - 48) + 5 * (i[6] - 48) + 6 * (i[7] - 48) + 7 * (i[8] - 48) + 8 * (i[9] - 48) + 9 * (i[10] - 48);
	check = check % 11;
	if (check == 10) {
		if (i[12] == 88)
			cout << "Right";
		else {
			i[12] = 88;
			cout << i;
		}
	}
	else {
		if (i[12]-48 ==check )
			cout << "Right";
		else {
			i[12] = check+48;
			cout << i;
		}
	}
	//system("pause");

	return 0;
}