/** -------------------------------------------------------------------------- **/
/** Subset Sum **/
// Verifica se há uma soma com a quantida int sum
/** -------------------------------------------------------------------------- **/

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
            if(i >= vet[j-1])
                subset[i][j] = subset[i][j] || subset[i - vet[j-1]][j-1];
        }
    }

    /*
    for(int i = 0; i <= sum; i++){
        for (int j = 0; j <= n; j++)
            printf("%4d", subset[i][j]);
        printf("\n");
    } */

    return subset[sum][n];
}

int main(void){

    vector<int> vet;
    vet.push_back(9); vet.push_back(7);
    vet.push_back(5); vet.push_back(3);
    vet.push_back(2);

    cout<<"Subset Sum"<<endl;
	cout<<"resposta :"<<subset_sum(vet, 12)<<endl<<endl;

    return 0;
}
