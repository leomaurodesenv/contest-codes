/*
* Problema: Zero vale Zero
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1871
*/

#include <cstdio>
#include <cstdlib>

#include <iostream>
#include <algorithm>

#include <string>
#include <locale>

#include <vector>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main(void){

    long long m, n, val;
    char val_c[20];

    cin>>m>>n;
    while(m != 0 && n != 0){
        val = m + n;
        sprintf(val_c, "%ld", val);
        string val_s(val_c);
        string resp = "";

        for(int i=0; i<val_s.length(); i++){
            if(val_s[i] != '0') resp += val_s[i];
        }
        cout<<resp<<endl;
        cin>>m>>n;
    }

    return 0;
}
