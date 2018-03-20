/*
* Problema: Tradutor do Papai Noel
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1763
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <string>
#include <sstream>
#include <iomanip>
#include <locale>
#include <bitset>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>

#define INF 0x3F3F3F3F
#define PI 3.14159265358979323846
#define EPS 1e-10

#define file_in(file) freopen(file".in", "r", stdin)
#define file_out(file) freopen(file".out", "w+", stdout)
#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;


int main(){

    string str;
    while(cin>>str){
        if(str=="brasil"
           || str=="portugal") cout<<"Feliz Natal!";
        else if(str=="alemanha") cout<<"Frohliche Weihnachten!";
        else if(str=="austria") cout<<"Frohe Weihnacht!";
        else if(str=="coreia") cout<<"Chuk Sung Tan!";
        else if(str=="espanha" || str=="argentina" || str=="chile" || str=="mexico") cout<<"Feliz Navidad!";
        else if(str=="grecia") cout<<"Kala Christougena!";
        else if(str=="estados-unidos"
                || str=="inglaterra"
                || str=="australia"
                || str=="antardida"
                || str=="canada") cout<<"Merry Christmas!";
        else if(str=="suecia") cout<<"God Jul!";
        else if(str=="turquia") cout<<"Mutlu Noeller";
        else if(str=="irlanda") cout<<"Nollaig Shona Dhuit!";
        else if(str=="belgica") cout<<"Zalig Kerstfeest!";
        else if(str=="italia"
                || str=="libia") cout<<"Buon Natale!";
        else if(str=="siria"
                || str=="marrocos") cout<<"Milad Mubarak!";
        else if(str=="japao") cout<<"Merii Kurisumasu!";
        else cout<<"--- NOT FOUND ---";
        cout<<endl;
    }

    return 0;
}
