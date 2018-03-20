#include<iostream>
#include<climits>
#include<queue>
#include<vector>
#define fore(i,n) for(int i=0; i<n; i++)
#define INF 100000 /* Constante para infinito. Utilize INT_MAX se quiser. */

using namespace std;

class Aresta{

public:
    int valor;
    int no;

    /* Construtor */
    Aresta(int a, int b)
    {
        valor = a;
        no = b;
    }

    /* Sobrecarregando o operador maior para utilizar na priority_queue */
    bool operator>(const Aresta& b)const
    {
        return valor > b.valor;
    }
};


void dijkstra(vector< vector<Aresta> >& grafo, int ini, int fim)
{

    /* Vetor de distâncias */
    vector<int> dist(grafo.size(), INF);
    dist[ini] = 0;

    /* Fila de prioridade retornando o menor valor */
    priority_queue<Aresta, vector<Aresta>, greater<Aresta> > pq;
    pq.push(Aresta(0, ini));

    while(!pq.empty())
    {
        Aresta x = pq.top();
        pq.pop();

        if(dist[x.no] == x.valor)
        {
            for(int i=0; i< grafo[x.no].size(); i++)
            {
                Aresta y = grafo[x.no][i];
                if(dist[x.no] + y.valor < dist[y.no])
                {
                    dist[y.no] = dist[x.no] + y.valor;
                    pq.push(Aresta(dist[y.no], y.no));
                }
            }

        }
    }

    if(dist[fim]==INF)
        cout<<"Não existe um caminho de "<<ini<<" até "<<fim<<endl;
    else cout<<"Distancia de "<<ini<<" a "<<fim<<" é: "<<dist[fim]<<endl;

}

int main()
{
    int n, m, ini, fim, peso, x, y;
    cin>>n>>m;
    vector< vector<Aresta> > grafo(n);

    /* Lendo as arestas e inserindo no grafo DIRECIONADO*/
    fore(i, m)
    {
        cin>>x>>y>>peso;
        Aresta a(peso, y);
        grafo[x].push_back(a);

        /* Adicione as duas linhas abaixo caso o grafo seja não direcionado */
        //Aresta b(peso, x);
        //grafo[y].push_back(b);
    }

    cin>>ini>>fim; /* lê o vértice inicial e final */
    dijkstra(grafo, ini, fim); /*Executar o dijkstra */

}
