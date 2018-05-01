#include <iostream>

#include <vector>

#include <algorithm>

#include <set>

using namespace std;


int main(){

    
    int a;

    cin>>a;

    vector<int> v(a);

    set<int> s;

    for(int i=0; i<a; i++){

        cin>>v[i];

        s.insert(v[i]);

    }
    
    //sort(v.begin(),v.end());

    
    //v.erase(unique(v.begin(), v.end()), v.end());

    cout<<s.size()<<endl;

        //for(int i=0; i<a-1; i++)

   	//cout<<v[i]<<" ";

    	//cout<<v[v.size()-1]<<endl;

    
     while(!s.empty())

    {

        cout<<*s.begin()<<" ";

        s.erase(s.begin());
 
    }

    
    return 0;

}