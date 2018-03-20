#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <locale>
#include <set>
#include <vector>
#include <bitset>
#include <map>

#define fore(var, i, f) for(int var=i; var<f; var++)
#define lli long long int
#define N 70000

using namespace std;

int main(void){

    int l, m;
    string lang, msg;
    map<string, string> msgs;

    cin>>l; cin.ignore();
    fore(i, 0, l){
        getline(cin,lang);
        getline(cin,msg);
        msgs[lang] = msg;
    }

    cin>>m; cin.ignore();
    fore(i, 0, m){
        getline(cin,msg);
        getline(cin,lang);
        cout<<msg<<endl;
        cout<<msgs[lang]<<endl<<endl;
    }

    return 0;
}
