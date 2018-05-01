#include<iostream>  
#include<set>  
using namespace std;  
int main(){  
    set<int> find;  
    int a[101],n;  
    cin>>n;  
    for(int i=0;i<n;i++)  
        cin>>a[i];  
    set<int> num(a,a+n);  
    set<int>::iterator iter;  
    for(int i=0;i<n;i++)  
        for(int j=i+1;j<n;j++){  
            if((iter=num.find(a[i]+a[j]))!=num.end())  
                find.insert(*iter);  
        }  
    cout<<find.size();  
    return 0;  
}  