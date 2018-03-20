/*
* Problema: A Lenda de Flavious Josephus
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1030
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

    int nc;
    int n, k, next, c;

    cin>>nc;
    for(int a=0; a<nc; a++){
        cin>>n>>k;
        vector <int> p(n);
        for(int i=0; i<n; i++){
            p[i] = i+1;
        }

        c = 1;
        /*cout<<"n:"<<n<<" k:"<<k<<endl;*/
        while(p.size() != 1){
            /*cout<<"c:"<<c;*/
            next = (c + k - 1) % p.size();
            /*cout<<" next(old):"<<next;*/
            next = (next == 0) ? p.size() - 1 : next - 1;
            c = next + 1;
            /*cout<<" next:"<<next<<endl;*/
            p.erase(p.begin() + next);

            /*cout<<"vet:";
            for(int i=0; i<p.size(); i++) cout<<" "<<p[i];
            cout<<endl;*/
        }
        cout<<"Case "<<(a+1)<<": "<<p[0]<<endl;
    }


    return 0;
}
