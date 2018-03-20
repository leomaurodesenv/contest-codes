bool subset_sum(vector<int> &vet, int sum){
    /* Os valores subset[i][j] representa subset do
       vet[0..j-1] que a soma é equivalente a i */
    int n = vet.size();
    bool subset[sum+1][n+1];

    /* Caso base: nenhum elemento */
    for(int j = 0; j < n+1; j++) subset[0][j] = true;

    /* De mais valores false */
    for(int i = 1; i < sum+1; i++) subset[i][0] = false;

    /* Preenchimento bottomup */
    for(int i = 1; i < sum+1; i++){
        for(int j = 1; j < n+1; j++){
            subset[i][j] = subset[i][j-1];
            if (i >= vet[j-1])
                subset[i][j] = subset[i][j] || subset[i - vet[j-1]][j-1];
        }
    }

    return subset[sum][n];
}