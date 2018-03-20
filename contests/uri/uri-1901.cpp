/*
* Problema: Borboletas
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1901
*/

#include <iostream>
#include <algorithm>
#include <string>

#include <vector>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main(void){

    int n, val;
    vector <int> resp;
    cin >> n;
    int mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin >> mat[i][j];
    }

    int i, j;
    for(int k=0; k<n*2; k++){
        cin >> i >> j;
        val = mat[i-1][j-1];
        if(find(resp.begin(), resp.end(), val) == resp.end()) resp.push_back(val);
    }
    cout<<resp.size()<<endl;

    return 0;
}
