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



int n, k = 0;

vector<int> res(1005);



int check(int p)

{

	if (res[p] != 0)return res[p];

	int a = 1;

	
	for (register int i = 1; i <= p / 2; i++)

		a += check(i);

	res[p] = a;

	return a;
}




int main() {


	
cin >> n;

	res[1] = 1;

	//n = 970;

	k=check(n);

	cout << k;



	//system ("pause");



	return 0;

}