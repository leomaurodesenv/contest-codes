int levenshtein_topdown(string &x, int len_x, string &y, int len_y){
    int custo, custo_min;

    /* Caso base: strings vazias */
    if(len_x == 0) return len_y;
    if(len_y == 0) return len_x;

    /* Testa se o ultimo caractere das strings combinam */
    if(x[len_x-1] == y[len_y-1]) custo = 0;
    else custo = 1;

    /* Retorna o minimo da deleção do char x, char y, e dos dois */
    custo_min = min(levenshtein(x, len_x - 1, y, len_y    ) + 1,
                    levenshtein(x, len_x    , y, len_y - 1) + 1);
    custo_min = min(levenshtein(x, len_x - 1, y, len_y - 1) + custo, custo_min);

    return custo_min;
}

typedef struct {
    int val;
    char op;
    /* s - substituição, i - inserção, d - deleção, v - vazio */
} lev_data;

int levenshtein_bottomup(string &x, string &y){
    int custo, mat_min;
    char op;

    /* Matriz de operacoes */
    int x_len = x.size()+1, y_len = y.size()+1;
    vector< vector< lev_data > > mat (x_len, vector< lev_data > (y_len));

    fore(i, 0, x_len){ mat[i][0].val = i; mat[i][0].op = 'v'; }
    fore(j, 0, y_len){ mat[0][j].val = j; mat[0][j].op = 'v'; }

    fore(i, 1, x_len){
        fore(j, 1, y_len){
            /* Determina custo */
            if(x[i-1] == y[j-1]) custo = 0;
            else custo = 1;
            /* Função minimo */
            mat_min = mat[i-1][j].val + 1; op = 'i';
            if(mat_min > mat[i][j-1].val + 1){
                mat_min = mat[i][j-1].val + 1; op = 'd';
            }
            if(mat_min > mat[i-1][j-1].val + custo){
                mat_min = mat[i-1][j-1].val + custo; op = 's';
            }
            /* Preenche matriz */
            mat[i][j].val = mat_min;
            mat[i][j].op = op;
        }
    }

    return mat[x.size()][y.size()].val;
}