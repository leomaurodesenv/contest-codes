/** -------------------------------------------------------------------------- **/
/** Dijkstra Vetor Matrix **/
/** -------------------------------------------------------------------------- **/

#include <stdio.h>
const int inf = 0x3F3F3F3F;
int nv, na, vx,vy,nb;
int grafo[1010][1010];
int est[1010];
int vis[1010];
int caminhoMinimo(){
    int v;
    for(int i=0;i<nv;i++){
        est[i] = inf;
        vis[i] = 0;
    }
    est[0] = 0;
    est[1005] = inf;
    for(int i=0;i<nv;i++){
        v = 1005;
        for(int j=0;j<nv;j++){
            if(est[j]<est[v] && !vis[j])v = j;
        }
        if(v == 1005)break;
        vis[v]=1;
        for(int w=0;w<nv;w++){
            if(est[v] + grafo[v][w] < est[w])est[w] = est[v] + grafo[v][w];
        }
    }
    return est[nv-1];
}

int main(){
    int menor;
    scanf("%d %d",&nv,&na);
    nv += 2;
    for(int i=0;i<nv;i++){
        for(int j=0;j<nv;j++){
            grafo[i][j] = inf;
        }
    }
    for(int i=0;i<na;i++){
        scanf("%d %d %d",&vx,&vy,&nb);
        grafo[vx][vy] = nb;
        grafo[vy][vx] = nb;
    }
    menor = caminhoMinimo();
    printf("%d\n",menor);
    return 0;
}
