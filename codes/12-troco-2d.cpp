int troco_2d(vector <int> &l, int v){
    /* Declarando variaveis */
    int n = l.size(), m1, m2;
    int mat[v+1][n+1];

    /* Setando impossivel */
    for(int i=0; i<v+1; i++)
        for(int j=0; j<n+1; j++) mat[i][j] = -1;

    /* Preenchendo o vetor */
    for(int i=1; i<v+1; i++){
        for(int j=1; j<n+1; j++){
            mat[i][j] = mat[i][j-1];
            if(i-l[j-1] >= 0){
                m1 = (mat[i-l[j-1]][j] != -1) ? mat[i-l[j-1]][j] + 1 : 1;
            }
            else m1 = mat[i][j];

            if(mat[i][j] == -1) mat[i][j] = m1;
            else mat[i][j] = min(mat[i][j], m1);
        }
    }

    /*
    // Imprime o vetor
    for(int i=0; i<v+1; i++){
        for(int j=0; j<n+1; j++){
            cout<<"("<<i<<", "<<j<<"):"<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    /*
    // Lista dos itens utilizados
    bool item;
    int a = v, b = n;
    vector <int> m(n, 0);
    while(a >=0 && b >=1 && mat[a][b] != -1){
        item = false;
        for(int j=0; j<n; j++){
            if(a-l[j] >= 0 && ((mat[a-l[j]][b] + 1) == mat[a][b] || mat[a-l[j]][b] == -1)){
                m[j]++; a -= l[j]; item = true;
            }
        }
        if(!item){b--;}
    }

    //cout<<"moedas:";
    for(int i=n-1; i>0; i--) cout<<m[i]<<" ";
    cout<<m[0]<<endl;
    */

    return mat[v][n];
}