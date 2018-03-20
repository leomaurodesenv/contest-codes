/*
* Problema: Estimando a Média
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1779
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

    int t, n, p1, pn, c, maior_c, maior_p;
    cin>>t;

    for(int caso=0; caso < t; caso++){
        cin>>n; pn = -1; c = 1; maior_p = 0; maior_c = 0;
        for(int i=0; i<n; i++){
            cin>>p1;
            if(p1 < pn){
                if(maior_p < pn || (maior_p == pn && maior_c < c)){
                    maior_c = c;
                    maior_p = pn;
                }
                c=1; pn = p1;
            }
            else if(p1 > pn){ c=1; pn = p1; }
            else{ c++; } /* p1 == pn*/
        }
        if(maior_p < pn || (maior_p == pn && maior_c < c)){
            maior_c = c;
            maior_p = pn;
        }
        cout<<"Caso #"<<(caso+1)<<": "<<maior_c<<endl;
    }

    return 0;
}
