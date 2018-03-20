/*
* Problema: Subsequências
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1507
*/

#include <iostream>
#include <string>

#include <vector>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main(void){

	int n, q;
	int cc;
	string s, r;

	cin >> n;
	for(int i=0; i<n; i++){
        cin >> s >> q;
        for(int j=0; j<q; j++){
            cin >> r;
            cc = 0;
            for(int k=0; k<s.length(); k++){
                if(s[k] == r[cc]) cc++;
            }
            /*cout << "cc:"<<cc<<" len:"<<r.length()<<endl;*/
            if(cc == r.length()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
	}

    return 0;
}
