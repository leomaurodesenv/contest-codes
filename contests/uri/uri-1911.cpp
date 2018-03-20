/*
* Problema: Ajude Girafales
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1911
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void){

	int n, m, error_l, count_e;
	map <string, string> alunos;
	string nome, ass, val;

    cin >> n;
	while(n != 0){
        for(int i=0; i<n; i++){
            cin >> nome;
            cin >> ass;
            alunos.insert(pair<string, string>(nome, ass));
        }

        cin >> m;
        count_e = 0;
        for(int i=0; i<m; i++){
            cin >> nome;
            cin >> ass;
            val = alunos[nome];
            error_l = 0;
            for(int j=0; j < val.length(); j++){
                if(val[j] != ass[j]) error_l++;
            }
            if(error_l > 1) count_e++;
        }
        cout << count_e << endl;
        cin >> n;
	}

    return 0;
}
 
