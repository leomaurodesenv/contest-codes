/*
* Primo Rápido
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1221
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

bool primo(long int n){
    if(n < 1) return false;
    else if(n == 2) return true;
    else if(n%2 == 0) return false;

    for(int i=3; i*i<=n; i+=2){
        if(n%i == 0) return false;
    }
    return true;
}

int main(void){

    int n;
    long int num;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num;
        if(primo(num)) cout<<"Prime";
        else cout<<"Not Prime";
        cout<<endl;
    }

    return 0;
}
