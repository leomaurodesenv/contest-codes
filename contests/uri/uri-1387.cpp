/*
* Problema: Og
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1387
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

#include <string>
#include <locale>

#include <vector>
#include <map>
#include <queue>
#include <stack>

#include <algorithm>
#include <cmath>

using namespace std;

int main(void){

    int l, r;

    while(true){
        cin>>l>>r;
        if(l == 0 && r == 0) break;
        r = l + r;
        cout<<r<<endl;
    }

    return 0;
}
