/*
* Problema: Jogo da Estratégia
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1940
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

    int j, r, ind, val;
    cin>>j>>r;
    vector <int> jog(j, 0);


    for(int i=0; i < j*r; i++){
        cin>>val;
        ind = i%j;
        jog[ind] += val;
    }

    int maiori = 0, maiorc = jog[0];
    /* cout<<"jog:"<<0<<" ponto:"<<jog[0]<<endl; */
    for(int i=1; i < j; i++){
        /* cout<<"jog:"<<i<<" ponto:"<<jog[i]<<endl; */
        if(jog[i] >= maiorc){
            maiorc = jog[i]; maiori = i;
        }
    }

    cout<<(maiori+1)<<endl;

    return 0;
}
