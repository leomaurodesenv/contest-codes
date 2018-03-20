/*
* Outra Loteria
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1634
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

lli sum_vet(vector<lli> &vet){
    lli r = 0;
    for(int i=0; i<vet.size(); i++)
        r += vet[i];
    return r;
}

lli mdc(lli a, lli b){
    return (b==0) ? a : mdc(b, a%b);
}

int main(void){

    int n, m;
    lli c, sum_val, mdc_val;

    while(true){
        cin>>n>>m;
        if(n==0 && m==0) break;

        vector<lli> vet(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>c;
                vet[i] = c;
            }
        }

        sum_val = sum_vet(vet);
        for(int i=0; i<n; i++){
            mdc_val = mdc(vet[i], sum_val);
            cout<<vet[i]/mdc_val<<" / "<<sum_val/mdc_val<<endl;
        }
    }

    return 0;
}
