#include<iostream>
#include<vector>
#include<algorithm>
#define fore(i, n) for(int i=0; i<n; i++)
using namespace std;

class Aresta{

public:
  int x, y, peso;

  bool operator<(const Aresta& a)const{
    return peso < a.peso;
  }

};

void initSet(vector<int>& pset){
  fore(i, pset.size()) pset[i] = i;
}

int findSet(vector<int>& pset, int i){
  if(pset[i]==i) return i;
  pset[i] = findSet(pset, pset[i]);
  return pset[i];

}

void unionSet(vector<int>& pset, int i, int j){
  pset[findSet(pset, i)] = findSet(pset, j);
}

int main(){

int n, e;
int x, y, peso;

/* n é o numero de vértices e m o número de arestas */
while(cin>>n>>e){
  if(n==0 && e==0) break;
  vector<Aresta> arestas(e);

  fore(i, e){
    cin>>x>>y>>peso;
    arestas[i].x = x-1; arestas[i].y = y-1; arestas[i].peso = peso;
  }

   /* ordena as arestas */
   sort(arestas.begin(), arestas.end());

   /* Conjuntos Disjuntos */
   vector<int> pset(n);
   initSet(pset);
   int arestasTotal = 0; int pesoTotal = 0;


   /* Algoritmo de Kruskal */
   for(int i=0; arestasTotal!=n-1 && i<arestas.size(); i++){
     if(findSet(pset, arestas[i].x) != findSet(pset, arestas[i].y)){
       unionSet(pset, arestas[i].x, arestas[i].y);
       pesoTotal+=arestas[i].peso;
       arestasTotal++;
     }
   }
   cout<<pesoTotal<<endl;

}

return 0;
}
