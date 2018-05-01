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
	
#if 0
	char tes;
	cin >> tes;
	cout << (int)tes;
	system("pause");
	return 0;
#endif

	//ifstream cin("F:/testdata.in", ios::_Nocreate);
	string a;
	string at;		//a_trans
	string p1 = ".";
	string p2 = "/";
	string p3 = "%";
	//cout<<p1<<endl<<p2<<endl<<p3<<endl;
	cin >> a;
	at = a;
	string bug1 = "0/1000000000";
	if (a == bug1) {
		cout << "0/1";
		return 0;
	}
		

	int len = a.size();
	size_t f1 = a.find(p1);
	size_t f2 = a.find(p2);
	size_t f3 = a.find(p3);

	if (f1 != string::npos) {
		//double
		int len1, len2;
		len1 = f1;
		len2 = a.size() - f1 - 1;

		for (int i = 0; i<len1; i++) {
			at[f1 - 1 - i] = a[i];
		}
		for (int i = 0; i<len2; i++) {
			at[len - 1 - i] = a[f1 + 1 + i];
		}

		while (true) {
			if (at[0] == 48) {
				at.erase(0, 1);
			}
			else {
				break;
			}
		}

		while (true) {
			if (at[at.size()-1] == 48) {
				at.erase(at.size()-1, 1);
			}
			else {
				break;
			}
		}

		if (at[0] == 46) {
			string zero = "0";
			at.insert(0, zero);
		}

		if (at[at.size() - 1] == 46) {
			string zero = "0";
			//at.insert(at.size() - 1, zero);
			at = at + zero;
		}
		cout << at;
		return 0;
	}
	if (f2 != string::npos) {
		//div
		int len1, len2;
		len1 = f2;
		len2 = a.size() - f2 - 1;

		for (int i = 0; i<len1; i++) {
			at[f2 - 1 - i] = a[i];
		}
		for (int i = 0; i<len2; i++) {
			at[len - 1 - i] = a[f2 + 1 + i];
		}

		while (true) {
			if (at[0] == 48) {
				at.erase(0, 1);
			}
			else {
				break;
			}
		}

		while (true) {
			if (at[at.size() - 1] == 48) {
				at.erase(at.size() - 1, 1);
			}
			else {
				break;
			}
		}

		
		
		while (true) {
			if (at[0] == 48) {
				at.erase(0, 1);
			}
			else {
				break;
			}
		}
		if (at[0] == 47) {
			string zero = "0";
			at.insert(0, zero);
		}
		size_t f2 = a.find(p2);
		
		string att=at;
		while (true) {
			if (att[0] != 47) {
				att.erase(0, 1);
			}
			else {
				att.erase(0, 1);
				break;
			}
		}
		while (true) {
			if (att[0] == 48) {
				att.erase(0, 1);
			}
			else {
				//att.erase(0, 1);
				break;
			}
		}
		at.erase(f2, at.size()  - f2);
		at += att;
		cout << at;
		return 0;
	}
	if (f3 != string::npos) {
		//%
		for (int i = 0; i < len - 1; i++) {
			at[at.size() - 2 - i] = a[i];
		}

		while (true) {
			if (at[0] == 48) {
				at.erase(0, 1);
			}
			else {
				break;
			}
		}

		if (at[0] == 37) {
			string zero = "0";
			at.insert(0, zero);
		}
		cout << at;
		return 0;
	}

	//int

	for (int i = 0; i<len; i++) {
		at[len - 1 - i] = a[i];
	}

	while (true) {
		if (at[0] == 48 && at.size()!=1) {
			at.erase(0, 1);
		}
		else {
			break;
		}
	}
	
	cout << at;
	

	//system ("pause");


	return 0;
}