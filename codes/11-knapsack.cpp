/** -------------------------------------------------------------------------- **/
/** Mochila **/
// O maior valor de itens que cabem na mochila
// -> wm peso max utilizado
// -> pc quantidade de itens na mochila
/** -------------------------------------------------------------------------- **/

int knapSack(int W, vector <int> &wt, vector <int> &val, int n, int &wm, int &pc){
    int i, w;
    int K[n+1][W+1];

    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++){
        for (w = 0; w <= W; w++){
            if(i==0 || w==0)
                K[i][w] = 0;
            else if(wt[i-1] <= w)
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
            else
                K[i][w] = K[i-1][w];
        }
    }

    int resp = K[n][W], c = 0;

    // Retorna peso utilizado
    for(int i=0; i<(W+1); i++){
        if(resp == K[n][i]){wm = i; break;}
    }

    // Retorna qtde de itens na mochila
    int nc = n, Wc = W;
    while(nc>=1){
        if(nc >= 0 && Wc - wt[nc-1] >= 0)
        if((K[nc][Wc] - val[nc-1]) == K[nc-1][Wc - wt[nc-1]]){
            c++; Wc -= wt[nc-1];
        }
        nc--;
    }
    pc = c;

    return resp;
}