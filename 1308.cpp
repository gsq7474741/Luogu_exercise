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
#include <iterator>
#include <cctype>
using namespace std;


int main() {
    
    //ifstream cin("D:/testdata.in");
    string a;
    string b;
    int index;
    index=-1;
    int index2=0;
    int t=0;
    int asize;
    int firstidx;
    getline(cin,a);
    //cin.ignore();
    getline(cin,b);
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    //cout<<a<<endl<<b;
    string af;
    af=" "+a+" ";
    b=" "+b+" ";
    
    asize=a.size();
    size_t f =b.find(af);
    if (f==string::npos)
        cout<<index;
    else{
        firstidx=f;
        index=f;
    //	t++;
        while(true){
            
            if(f==string::npos){
                break;
            }
            else{
                b.erase(0,index);
                b.erase(0,asize);	//string erase
                f =b.find(af); 		//find
                index=f;			//index replace
                
                t++;
            }
        }
    
        
        
        cout<<t<<" "<<firstidx;
    }
    
    
    //system ("pause");

    return 0;
}