/*
* Teclado Quebrado
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1451
*/

#include <iostream>
#include <string>

#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <list>

#include <algorithm>
#include <cmath>


using namespace std;

int main(void){

	string c, text, b_text;
	bool b_active;

	while(cin >> c){
        b_active = false;
        text = ""; b_text = "";
        for(int i=0; i<c.length(); i++){
            if(c[i] == '['){
                text = b_text + text; b_text = "";
                b_active = true;
            }
            else if(c[i] == ']'){
                text = b_text + text; b_text = "";
                b_active = false;
            }
            else{
                if(b_active) b_text += c[i];
                else text += c[i];
            }
        }
        text = b_text + text;
        cout<<text<<endl;

	}

    return 0;
}
