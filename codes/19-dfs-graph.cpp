/** -------------------------------------------------------------------------- **/
/** Grafo DFS **/
// Retorna as conexões de um vertice a outro
/** -------------------------------------------------------------------------- **/

// Variáveis do DFS Graph
// O(V + E) -> O(V^2)
// DFS is not only useful for traversing a graph. It can be used to solve many other graph problems.
// - Finding Connected Components in Undirected Graph
#define DFS_WHITE -1
#define DFS_BLACK 1
#define V 10

int dfs_num[V];
void dfs_graph(int u){
    cout<<u<<" "; dfs_num[u] = DFS_BLACK; // this vertex is visited, mark it
    forit(v, adj_list[u]){ // try all neighbors v of vertex u
        if(dfs_num[v->first] == DFS_WHITE) // avoid cycle
            dfs(v->first); // v is a (neighbor, weight) pair
    }
}

int main(){

    // inside int main()
    numComponent = 0;
    memset(dfs_num, DFS_WHITE, sizeof dfs_num);
    fore(i, 0, V - 1){
        if (dfs_num[i] == DFS_WHITE) {
            printf("Component %d, visit:", ++numComponent);
            dfs(i);
            printf("\n");
        }
        printf("There are %d connected components\n", numComponent);
    }

    // For the sample graph, the output is like this:
    // Component 1, visit: 0 1 2 3 4
    // Component 2, visit: 5
    // Component 3, visit: 6 7

    return 0;
}

