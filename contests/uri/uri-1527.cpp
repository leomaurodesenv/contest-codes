#include<iostream>
#include<vector>

using namespace std;

void initSet(vector<int>& pset){

  for(int i=0; i<pset.size(); i++) pset[i] = i;
}

int findSet(vector<int>& pset, int i){

  if(pset[i] == i) return i;
  pset[i] = findSet(pset, pset[i]);
  return pset[i];

}

void unionSet(vector<int>&pset, int i, int j){

  pset[findSet(pset, i)] = findSet(pset, j);

}

int main(){

  int n, m, opt, x, y;

  while(cin>>n>>m){
    if(n==0 && m==0) break;
    int vitorias = 0;

    vector<int> pset(n);
    vector<int> pontos(n);

    initSet(pset);

    for(int i=0; i<n; i++){
     cin>>pontos[i];
    }

    for(int i=0; i<m; i++){
       cin>>opt>>x>>y;
       x--; y--;
       if(opt==1){
           int p = pontos[findSet(pset, x)];
           unionSet(pset, x,y);
           pontos[findSet(pset, y)]+= p;
       }

       else{
         if(findSet(pset, x)==findSet(pset, 0)){
           if(pontos[findSet(pset, x)] > pontos[findSet(pset, y)]) vitorias++;
         }
         else if( findSet(pset, y)==findSet(pset, 0)){
           if(pontos[findSet(pset, y)] > pontos[findSet(pset, x)]) vitorias++;
         }
       }
    }
    cout<<vitorias<<endl;

  }


  return 0;
}
