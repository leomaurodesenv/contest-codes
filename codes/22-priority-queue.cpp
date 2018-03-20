/*
* Problema: 12100 - Printer Queue
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3252
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

typedef struct{
    int priority;
    int i;
} job;

class job_comparison{
    public:
    bool operator() (const job &a, const job &b) const{
        //return(a.priority < b.priority);
        return a.priority == b.priority ? (a.i < b.i) : (a.priority < b.priority);
    }
};

int main(){

    //file_in("test");

    typedef priority_queue <job, vector<job>, job_comparison> my_type;
    int t;

    cin>>t;
    while(t--){
        my_type printer;
        int n, m, pri;

        cin>>n>>m;
        fore(i, 0, n){
            cin>>pri;
            job neu;
            neu.i = i;
            neu.priority = pri;
            printer.push(neu);
        }

        int c = 0;
        while(!printer.empty()){
            job neu = printer.top();
            cout<<"pri:"<<neu.priority<<" idx:"<<neu.i<<endl;
            c++;
            if(neu.i == m) break;
            printer.pop();
        }
        cout<<c<<endl;
    }
    //printer.push()

    return 0;
}
