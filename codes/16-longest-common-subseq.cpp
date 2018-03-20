/** -------------------------------------------------------------------------- **/
/** LCS **/
// Retorna o maior subconjunto de caracteres iguais
/** -------------------------------------------------------------------------- **/

using namespace std;

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs(string &X, string &Y){
    int m = X.size(), n = Y.size();
    int L[m+1][n+1];

    /* Construindo a L[m+1][n+1] */
    for(int i=0; i<m+1; i++){
        for(int j=0; j<n+1; j++){
            /* Caso base: nenhum caractere */
            if(i == 0 || j == 0) L[i][j] = 0;
            /* Se forem iguais soma 1 com o resultado anterior */
            else if(X[i-1] == Y[j-1]) L[i][j] = L[i-1][j-1] + 1;
            /* Se não pega o máximo do X(i-1), Y(j-1) */
            else L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }

    /* Resultado final: L[m][n] */
    return L[m][n];
}

int main(){
    string X = "AGGTAB";
    string Y = "GXTXAYB";

    printf("Length of LCS is %d\n", lcs(X, Y) );

    return 0;
}
