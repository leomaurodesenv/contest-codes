/*
* Problema: Feedback
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1546
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

    int n, k, casos;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>k;
        for(int j=0; j<k; j++){
            cin>>casos;
            if(casos == 1) cout<<"Rolien"<<endl;
            else if(casos == 2) cout<<"Naej"<<endl;
            else if(casos == 3) cout<<"Elehcim"<<endl;
            else cout<<"Odranoel"<<endl;
        }
    }

    return 0;
}
