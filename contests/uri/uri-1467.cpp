/*
* Problema: Zerinho ou Um
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1467
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

    int a, b, c;

    while(cin>>a>>b>>c){

        if(a == b && c != a) cout<<"C";
        else if(a == c && b != a) cout<<"B";
        else if(b == c && b != a) cout<<"A";
        else cout<<"*";
        cout<<endl;
    }

    return 0;
}

