/*
* Problema: Arredondamento por Valor de Corte
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1305
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

#include <cstring>
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

    string num, cutoff;
    int ind;

    while(cin>>num>>cutoff){
        ind = 0;
        for(int i=0; i<num.size(); i++){
            if(num[i] == '.'){ind = i + 1; break;}
        }
        string dec, numr;
        if(ind == 0) dec = "";
        else dec.assign(num, ind, num.length()-1);

        if(ind == 1) numr = "0";
        else if(ind != 0) numr.assign(num, 0, ind-1);
        else numr = num;

        int run = (dec.size() > 4) ? 4 : dec.size();
        string rest(cutoff.begin()+2, cutoff.begin()+(2+run));
        bool roundin = false;

        /* cout<<"string: "<<dec<<" "<<rest<<endl; */
        if(dec.length()){
            int decn, restn;
            char decc[run+1], restc[run+1];
            char deccmp[dec.length()+1], restcmp[rest.length()+1];
            strcpy(deccmp, dec.c_str());
            strcpy(restcmp, rest.c_str());
            for(int i=0; i<run; i++){
                decc[i] = deccmp[i];
                restc[i] = restcmp[i];
            }
            decc[run] = '\0'; restc[run] = '\0';
            /* cout<<"char*: "<<decc<<" "<<restc<<endl; */
            sscanf(decc, "%d",  &decn);
            sscanf(restc, "%d",  &restn);
            /* cout<<"int: "<<decn<<" "<<restn<<endl; */
            if(decn >= restn) roundin = true;
        }

        int resp;
        char numc[numr.length()+1];
        strcpy(numc, numr.c_str());
        sscanf(numc, "%d",  &resp);
        if(roundin) resp++;
        cout<<resp<<endl;

    }

    return 0;
}
