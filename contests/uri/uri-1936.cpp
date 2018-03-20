/*
* Problema: Fatorial
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1936
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

#include <iomanip>
#include <string>
#include <locale>

#include <vector>
#include <map>
#include <queue>
#include <stack>

#include <algorithm>
#include <cmath>

using namespace std;

long long int fatorial(long long int num){
    if(num == 1) return 1;
    return num * fatorial(num - 1);
}

int main(void){

    int n, c;

    vector <int> fat;
    fat.push_back(1);
    fat.push_back(2);
    fat.push_back(6);
    fat.push_back(24);
    fat.push_back(120);
    fat.push_back(720);
    fat.push_back(5040);
    fat.push_back(40320);
    fat.push_back(362880);
    fat.push_back(3628800);

    cin>>n; c = 0;
    for(int i=fat.size()-1; i>=0; i--){
        if(n >= fat[i]){
            n -= fat[i];
            c++;
            i++;
        }
    }

    cout<<c<<endl;

    return 0;
}
