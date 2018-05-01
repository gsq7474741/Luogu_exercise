#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b,c,d,e=0;
	double h=0;
	cin>>a>>b>>c>>d;
	e=(60*c+d)-(60*a+b);
	a=e%60;
	h=e/60;
	cout<<h<<" "<<a;
    return 0;
}