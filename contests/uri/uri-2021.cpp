/*
* Problema: Luzes de Natal
* https://www.urionlinejudge.com.br/judge/pt/problems/view/2021
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

int main(void){

    int m, n, p, pos;

    cin>>m>>n>>p;
    while(true){
        int resp = 0;

        if(m == 0 & n == 0 & p == 0) break;
        for(int i=0; i<p; i++){
            cin>>pos;
            while(pos > n) pos -= n;
            resp += (n+1)-pos;
        }

        cout<<"Lights: "<<resp<<endl;
        cin>>m>>n>>p;
    }


    return 0;
}
