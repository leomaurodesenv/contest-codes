/*
* Figurinhas
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1028
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

#include <string>
#include <locale>

#include <bitset>
#include <vector>
#include <map>
#include <queue>
#include <stack>

#include <algorithm>
#include <cmath>

using namespace std;


typedef long long int lli;


lli mdc(lli a, lli b){
    return (b==0) ? a : mdc(b, a%b);
}

int main(void){

    int n;
    lli a, b;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        cout<<mdc(a, b)<<endl;
    }

    return 0;
}
