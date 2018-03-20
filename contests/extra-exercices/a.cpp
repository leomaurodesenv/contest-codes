/*
* Problema: A
* ** URL **
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

    int n, m;
    while(cin>>n>>m && n !=0 && m != 0){
        vet_i(prob, int, n, m, 0);
        fore(i, 0, n){
            fore(j, 0, m){
                cin>>prob[i][j];
            }
        }
        bitset <101> n2;
        vector <int> n3 (m, 0);
        vector <int> n4 (n, 0);
        bool td1, td2, td3, td4;
        int c = 0, n1c = 0;

        fore(i, 0, n){
            c = 0;
            fore(j, 0, m){
                c += prob[i][j];
                if(prob[i][j]) n2[j] = 1;
                n3[j] += prob[i][j];
                n4[i] += prob[i][j];
            }
            if(c != (m-1)) n1c++;
        }
        if(n1c == m) td1 = false;
        else td1 = true;
        //cout<<"td1: "<<td1<<endl;
        td2 = true;
        fore(i, 0, m){
            if(!n2[i]){
                td2 = false;
                break;
            }
        }
        //cout<<"td2: "<<td2<<endl;
        td3 = true;
        fore(j, 0, m){
            //cout<<"["<<j<<"]:"<<n3[j]<<" ";
            if(n3[j] == (n)){
                td3 = false;
                break;
            }
        }
        //cout<<"td3: "<<td3<<endl;
        td4 = true;
        fore(i, 0, n){
            if(n4[i] == 0){
                td4 = false;
                break;
            }
        }
        //cout<<"td4: "<<td4<<endl;
        c = 0;
        if(td1) c++;
        if(td2) c++;
        if(td3) c++;
        if(td4) c++;
        cout<<c<<endl;
    }

    return 0;
}
