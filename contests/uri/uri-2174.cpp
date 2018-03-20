#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <locale>
#include <set>

#define fore(var, i, f) for(int var=i; var<f; var++)

using namespace std;

int main(void){

    int n;
    locale loc;
    string name;
    set<string> bag;
    
    cin>>n;

    fore(i, 0, n){
        cin>>name;
        for(string::size_type i=0; i<name.length(); ++i)
            name[i] = tolower(name[i], loc);
        bag.insert(name);
    }
    
    cout<<"Falta(m) "<<(151-bag.size())<<" pomekon(s)."<<endl;

    return 0;
}
