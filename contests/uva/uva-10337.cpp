/*
* Problema: 10337 - Flight Planner
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1278
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

void print_v(vector< vector< int > > &vet){
    cout<<"-- print --"<<endl;
    fore(i, 0, vet.size()){
        cout<<(i)<<": ";
        fore(j, 0, vet[i].size())
            cout<<vet[i][j]<<" ";
        cout<<endl;
    }
}

int max_y(int x){
    fore(i, 0, 10){
        if(i == x) return i;
    }
    return 9;
}

int calc_fuel(vector< vector< int > > &wind, vector< vector< int > > &vet, int y, int x){
    int min1, min2, maxy = max_y(x-1);
    int d1 = INF, d2 = INF, d3 = INF;

    if(x <= 0) return 0;
    if(vet[y][x] != -1) return vet[y][x];

    if((y+1) <= maxy) d1 = 20 - wind[y+1][x-1] + calc_fuel(wind, vet, y+1, x-1);
    if((y-1) >= 0) d3 = 60 - wind[y-1][x-1] + calc_fuel(wind, vet, y-1, x-1);
    if(y <= maxy) d2 = 30 - wind[y][x-1] + calc_fuel(wind, vet, y, x-1);

    /*
    cout<<"(x, y): ("<<x<<", "<<y<<")"<<endl;
    cout<<"maxy: "<<maxy<<endl;
    cout<<"wind: "<<wind[y][x]<<endl;
    cout<<"(x-1, y+1): "<<d1<<endl;
    cout<<"(x-1, y  ): "<<d2<<endl;
    cout<<"(x-1, y-1): "<<d3<<endl;
    */

    min1 = min(d1, d2);
    min2 = min(d3, min1);

    vet[y][x] = min2;
    return min2;
}

int main(){

    int n, miles, m, fuel, v, maxy;

    /*
    file_in("test");
    file_out("test");
    */

    cin>>n;
    while(n--){
        cin>>miles;
        m = (miles/100);
        vet_i(wind, int, 10, (m+1), 0);
        fore(i, 0, 10){
            fore(j, 0, m){
                cin>>v;
                wind[9-i][j] = v;
            }
        }
        /* print_v(wind); */
        vet_i(fuelm, int, 10, (m+1), -1);
        calc_fuel(wind, fuelm, 0, m);
        /* print_v(fuelm); */
        cout<<fuelm[0][m]<<endl<<endl;
    }

    return 0;
}
