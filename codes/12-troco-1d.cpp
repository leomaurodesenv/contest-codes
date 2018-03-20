/** -------------------------------------------------------------------------- **/
/** Troco **/
// Dado um conjunto de moedas, retorne a menor quantidade de moedas necessarias
// para revolver um troco X
/** -------------------------------------------------------------------------- **/

int troco_1d(vector<int> &moedas, int valor){
    vector<int> usadas;
    int troco[valor+1], n = moedas.size();

    troco[0] = 0;
    fore(i, 1, valor+1){
        troco[i] = INF;
        fore(j, 0, n){
            if(i >= moedas[j])
                troco[i] = min(troco[i], 1+ troco[i-moedas[j]]);
        }
    }

    // Retorna as moedas utilizadas
    int i = valor;
    while(i >= 0 && troco[i] != 0){
        fore(j, 0, n){
            if(i >= moedas[j] && troco[i-moedas[j]] + 1 == troco[i]){
                i -= moedas[j];
                usadas.push_back(moedas[j]);
            }
        }
    }
    fore(a, 0, usadas.size()) cout<<usadas[a]<<" ";

    return troco[valor];
}
