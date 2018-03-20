/** -------------------------------------------------------------------------- **/
/** Soma Max (1D) **/
// Retorna um subsequencia de maior soma
/** -------------------------------------------------------------------------- **/

int soma_max_1d(vector <int> &v){
    int n = v.size();
    int r, sum;

    r = sum = 0;
    fore(i, 0, n){
        sum += v[i];
        r = max(r, sum);
        if(sum < 0) sum = 0;
    }
}

//////////////////////////

int soma_max_1d(vector <int> &v, int &xi, int &xf){
    int n = v.size();
    int r, sum, inicio, iniciocmp;

    if(n <= 0) return 0;

    r = sum = 0;
    xi = xf = inicio = 0;
    bool cmp = true;

	// Retorna indices
    fore(i, 0, n){
        sum += v[i];

        if(sum < 0){
            inicio = i + 1;
            sum = 0;
        }
        if(sum > r || (sum == r && (xf-xi < i- inicio))){
            r = sum;
            xi = inicio;
            xf = i;
        }
    }

    return r;
}