/*
* Problema: Catálogo de Livros
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1802
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

bool reversing(int i, int j) { return (i>j); }

int main(void){

    int n, val, k, cont = 5;
    vector <int> mat[cont]; /*p, m, f, q, b;*/

    srand (time(NULL));

    for(int i=0; i<cont; i++){
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>val;
            mat[i].push_back(val);
        }
    }
    cin>>k;

    /*for(int i=0; i<cont; i++){
        n = 2;
        for(int j=0; j<n; j++){
            val = rand()%11;
            mat[i].push_back(val);
            cout<<"j:"<<j<<" ";
        }
    }
    cout<<endl<<endl;*/

    vector <int> out;
    int sum;
    for(int a=0; a<mat[0].size(); a++){
        sum = mat[0][a];
        for(int b=0; b<mat[1].size(); b++){
            sum += mat[1][b];
            for(int c=0; c<mat[2].size(); c++){
                sum += mat[2][c];
                for(int d=0; d<mat[3].size(); d++){
                    sum += mat[3][d];
                    for(int f=0; f<mat[4].size(); f++){
                        sum += mat[4][f];
                        out.push_back(sum);
                        sum -= mat[4][f];
                    }
                    sum -= mat[3][d];
                }
                sum -= mat[2][c];
            }
            sum -= mat[1][b];
        }
        sum -= mat[0][a];
    }

    sort(out.begin(), out.end(), reversing);

    /*
    cout<<"size:"<<out.size()<<endl;
    sort(out.begin(), out.end(), reversing);

    for(int i=0; i<out.size(); i++){
        cout<<out[i]<<" ";
    }
    */
    sum = 0;
    for(int a=0; a<k; a++){
        sum += out[a];
    }
    cout<<sum<<endl;

    return 0;
}
