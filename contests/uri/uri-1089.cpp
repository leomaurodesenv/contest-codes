/*
* Problema: Loop Musical
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1089
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

    int n, h, peaks;
    vector <int> music;

    while (true){
        cin >> n;

        if (n == 0) break;
        music.clear();
        for(int i = 0 ; i<n ; i++){
            cin>>h;
            music.push_back(h);
        }

        peaks = 0;
        if(music[n - 1] > music[0] && music[1] > music[0]) peaks++;
        else if (music[n - 1] < music[0] && music[1] < music[0]) peaks++;

        if(music[n - 2] > music[n - 1] && music[0] > music[n - 1]) peaks++;
        else if (music[n - 2] < music[n - 1] && music[0] < music[n - 1]) peaks++;

        for (int i = 1 ; i<(n-1); i++) {
            if (music[i - 1] > music[i] && music[i + 1] > music[i]) peaks++;
            else if (music[i - 1] < music[i] && music[i + 1] < music[i]) peaks++;
        }
        cout<<peaks<<endl;
    }


    return 0;
}
