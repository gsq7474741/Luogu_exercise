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
    char a[6] = { 1 };
    char b[6] = { 1 };
    cin >> a >> b;
    int ai = 1,bi=1;
    
    for (int i = 0; i < 6; i++) {
        if(a[i]!=0)
            a[i] -= 64;
        else
        	a[i]=1;
        if(b[i]!=0)
            b[i] -= 64;
        else
        	b[i]=1;
    }

    for (int i = 0; i < 6; i++) {
        ai *= a[i];
        bi *= b[i];
    }

    if (ai % 47 == bi % 47)
        cout << "GO";
    else
        cout << "STAY";
    

    //system ("pause");

    return 0;
}