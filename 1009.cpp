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

int n = 1;
typedef long long ll;

string cheng(string a,string b) {
	string ji;
	string TMP = "0";
	for (size_t t1 = 1; t1 < a.size() + b.size(); t1++) //TMP
		{
			TMP.append("0");
		}

	for (size_t i = 0; i < b.size(); i++)
	{
		string tmp1="0";
		for (size_t t1 = 1; t1 < a.size()+1; t1++) //tmp1
		{
			tmp1.append("0");
		} 
		
		int jw = 0;
		for (size_t j = 0; j <= a.size(); j++)
		{
			if (j == a.size()) {
				tmp1[tmp1.size() - 1 - j] = jw + '0';
				break;
			}
				

			int jmp = (b[b.size() - 1 - i] - '0') * (a[a.size() - 1 - j] - '0') + jw;
			tmp1[tmp1.size() - 1 - j] = jmp % 10 + '0';  //jiafa
			jw = jmp / 10;
		}
		jw = 0;

		for (size_t k = 0; k < tmp1.size(); k++)
		{
			TMP[TMP.size() - 1 - k- i] = TMP[TMP.size() - 1 - k - i] + jw;
			jw = (TMP[TMP.size() - 1 - k - i] + tmp1[tmp1.size() - 1 - k] - '0' - '0') / 10;
			TMP[TMP.size() - 1 - k - i] = (TMP[TMP.size() - 1 - k - i] - '0' + tmp1[tmp1.size() - 1 - k] - '0') % 10 + '0';
			
		}
	}
	while (TMP[0] == '0')
		TMP.erase(0, 1);
	return TMP;
}

string jia(string a, string b) {
	string he;
	for (size_t i = 0; i < max(a.size(),b.size())+1; i++)
	{
		he.append("0");
	}

	int jw = 0;
				
	for (size_t k = 0; k < a.size(); k++)
	{
		he[he.size() - 1 - k ] = he[he.size() - 1 - k ] + jw;
		jw = (he[he.size() - 1 - k ] + a[a.size() - 1 - k] - '0' - '0') / 10;
		he[he.size() - 1 - k ] = (he[he.size() - 1 - k ] - '0' + a[a.size() - 1 - k] - '0') % 10 + '0';

	}
	jw = 0;

	for (size_t k = 0; k < b.size(); k++)
	{
		he[he.size() - 1 - k] = he[he.size() - 1 - k] + jw;
		jw = (he[he.size() - 1 - k] + b[b.size() - 1 - k] - '0' - '0') / 10;
		he[he.size() - 1 - k] = (he[he.size() - 1 - k] - '0' + b[b.size() - 1 - k] - '0') % 10 + '0';

	}
	if (jw != 0) he[0] = '1';
	return he;
}

string jie(int n) {
	string res="1";
	for (size_t i = 1; i <= n; i++)
	{
		res = cheng(res, to_string(i));
	}
	return res;
}
int main() {
	cin >> n;
	string res;
	for (size_t i = 1; i <= n; i++)
	{
		res = jia(res, jie(i));

	}
	while (res[0] == '0') res.erase(0, 1);
	cout << res;
	return 0;
}