/** -------------------------------------------------------------------------- **/
/** Dijkstra priority_queue **/
/** -------------------------------------------------------------------------- **/

#include <stdio.h>
#include <vector>
#include <utility> //pair
#include <queue> //priority_queue

using namespace std;// para não precisar de std::função();

//Resumindo os nomes dos tipos, isso ajuda muito, pois fica bem mais rápido na hora de programar
typedef pair<int,int> ii;
typedef vector<ii> vii;

//Implementação da função de comparação da priority queue, é só anotar o formato kkk
struct Compare{
   int operator()(ii& p1, ii& p2){
      return p1.second < p2.second;
   }
};

//Esse formato da priority_queue é usado apenas quando se usa "estruturas" como elementos da reap
priority_queue<ii,vii, Compare > reap; //HEAP, lista de prioridade, retorna o maior valor do conjunto
vector<vii> grafo(1010);//Lista de adjacencia, vetor de vetor

const int inf = 0x3F3F3F3F; //Representação de infinito
int nv, na, vx,vy,nb; //Variáveis de apoio
int vst[1010], est[1010]; //vst - vetor para marcar se o vertice foi visitado e est - distancia até o vertice, ou seja estimativa

//Lembre-se que nem sempre o caminho minimo comoeça no vertice 0, geralemte e no vertice vi, informado na entrada
int Dijkstra(){
   int v,w,c,size;// Variáveis auxiliares
   //Inicializa todas as estimativas com infinito e marca todos os vetices como não visitados
   for(int i=0;i<nv;i++){
      vst[i] = 0;
      est[i] = inf;
   }
   //Incializa o vertice inicial como visitado, atribui distancia (ZERO) e insere-o na fila
   est[0] = 0;
   reap.push(make_pair(0,0));
   //Enquanto ouver vertices que não foram processados
   while(!reap.empty()){
      v = reap.top().first;reap.pop();//Pega o vertice de menor estimativa
      if(vst[v]){//Se o vertice já foi processador não poderá ser processador novamente
         continue;
      }
      vst[v] = 1;
      size = grafo[v].size();//Quantidade de vertices adjacentes a v
      for(int va=0;va<size;va++){//Para cada vertie adjacente
         w = grafo[v][va].first;//Vertice
         c = grafo[v][va].second;//Distancia de v a w
         //Estima a nova distancia para w
         if(est[v] + c < est[w]){
            est[w] = est[v] + c;
            reap.push(make_pair(w,-est[w]));
         }
      }
   }
   return est[nv-1];//Retorna a distancia do vertice 0 até o vertice nv - 1, que é o vertice de chegada
}

int main(){
    scanf("%d %d",&nv,&na);
    nv += 2;//Adiciona o vertice de inicio e de chegada
    //Ler as arestas
    for(int i=0;i<na;i++){
        scanf("%d %d %d",&vx,&vy,&nb);
        grafo[vx].push_back(make_pair(vy,nb));
        grafo[vy].push_back(make_pair(vx,nb));
    }
    printf("%d\n",Dijkstra());
    return 0;
}
