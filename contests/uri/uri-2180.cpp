#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <locale>
#include <set>
#include <vector>
#include <bitset>

#define fore(var, i, f) for(int var=i; var<f; var++)
#define lli long long int
#define N 70000

using namespace std;

vector <lli> p;

void crivo(){
    bitset<N> bs;
    bs.set();
    bs[0] = bs[1] = 0;
    for(lli i=2; i<N; i++){
        if(bs[i]){
            for(lli j=i*i; j<N; j+=i)
                bs[j] = 0;
            p.push_back(i);
        }
    }
}

lli kmH(lli kg){
    lli s = 0;
    int i = 0, c = 0;

    while(p.size() != c && i != 10){
        //cout<<"kg:"<<kg<<" p[c]:"<<p[c]<<endl;
        if(kg <= p[c]){
            i++; s += p[c];
        }
        c++;
    }

    return s;
}

int main(void){

    lli kg, km, d = 60000000, dy = 0, hr = 0;
    crivo();
    
    cin>>kg;
    km = kmH(kg);
    
    while(km <= d){
        d -= km;
        hr++;
    }
    
    dy = hr / 24;

    cout<<km<<" km/h"<<endl;
    cout<<hr<<" h / "<<dy<<" d"<<endl;
    

    return 0;
}
