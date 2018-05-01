#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int p=0;
    int a[7],b[7],c[7];
    for(int i=0;i<7;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<7;i++){
        c[i]=a[i]+b[i];
    }
    for(int i=7;i>0;i--){
        if (c[i-1]>8){
            p=i;
        }
    }
    cout<<p;
    return 0;
}