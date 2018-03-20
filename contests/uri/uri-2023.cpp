/*
* Problema: A Última Criança Boa
* https://www.urionlinejudge.com.br/judge/pt/problems/view/2023
*/

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

    string s, normal;
    priority_queue < pair<string, string> > pq;
    pair<string, string> resp;
    locale loc;

    while(getline(cin,s)){
        normal = s;
        for(int i=0; i<s.length(); i++)
            s[i] = toupper(s[i],loc);
        pq.push(pair<string, string>(s, normal));
    }
    resp = pq.top();
    cout<<resp.second<<endl;

    return 0;
}
