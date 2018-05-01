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
using namespace std;

int a[1000001];   
void fl(int x)
{
	int i = 1;
	while (x != 0)
	{
		a[i] = x % 10;
		x /= 10;   
		i++;
	}
	a[0] = i - 1;   
}
int main() {
#if 0
	int n, x, s;
	cin >> n >> x;
	char x1;
	x1 = x + 48;
	string str = "";

	string i(int n){
		ostringstream st;
		st << n;
		return st.str();
	}
	
	for (int i = 0; i < n; i++) {
		s = i + 1;
		ostringstream p;

		str = str + to_string(s);
	}
	//for (int j = 0; j < str.size(); j++) {

	//}
	int out = 0;
	out = count_if(str.begin(), str.end(), bind2nd(equal_to<char>(), x1));
	cout << out;
#endif
#if 0

	char n[8];
	char x;
	cin >> n >> x;
	int count=0;

	for (int i = 0; i < 8; i++) {
			
	}
#endif
#if 0
//char *x1;
	//itoa(x, x1, 10);
	//char x2 = x1;
	for (int i = 0; i < n; i++)
	{
		//int c = i + 1;
		//_itoa_s(c, p, 10);
		for (int j = 0; j < 8; j++)
		{
			if (p[j] == x+48)
				count++;
		}
		//cout << p[0] << endl;

	}
#endif
	int n, x,ans=0;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		fl(i);
		for (int j = 1; j <= a[0]; j++) {
			if (a[j] == x)
				ans++;
		}
	}

	
	cout << ans;

	//system("pause");

	return 0;
}