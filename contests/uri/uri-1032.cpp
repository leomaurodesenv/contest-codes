/*
* Problema: O Primo de Josephus
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1032
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

#include <iomanip>
#include <cstring>
#include <string>
#include <locale>

#include <vector>
#include <map>
#include <queue>
#include <stack>

#include <algorithm>
#include <cmath>

using namespace std;

int primos[3502];

int flavious(int n){
    int r = 0;
    for(int i = 1; i <= n; i++){
        r = (r + primos[n-i]) % i;
    }
    return r;
}

int e_primo(int n){
    int i;
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    for(i = 3; i*i<=n; i+=2){
        if(n%i == 0) return 0;
    }
    return 1;
}

void numeros_primos(){
    memset(&primos, 0, sizeof(primos));

    int a = 0;
    for(int i=2; i<32650; i++){
        if(e_primo(i)){
            primos[a] = i;
            a++;
        }
    }
}

int main(){
    int n;

    numeros_primos();
    while(true){
        cin>>n;
        if(n == 0) break;
        cout<<flavious(n)+1<<endl;
    }
    return 0;
}
