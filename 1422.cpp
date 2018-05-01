#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	double a=0;
	cin>>a;
	if (a<= 150){
		a=a*0.4463;
		cout<<setprecision(1)<<setiosflags(ios::fixed)<<a;
		return 0;
	}
	if(a<=400){
		a=150*0.4463+(a-150)*0.4663;
		cout<<setprecision(1)<<setiosflags(ios::fixed)<<a;
		return 0;
	}
	if(a>400){
		a=150*0.4463+250*0.4663+(a-400)*0.5663;
		cout<<setprecision(1)<<setiosflags(ios::fixed)<<a;
		return 0;
	}
    return 0;
}