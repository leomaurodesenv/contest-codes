/** -------------------------------------------------------------------------- **/
/** Catalan Recorrente **/
// -> C(n) = (2*(2n+1)/(n+2)) * C(n-1);
// -> C(0) = 1
/** -------------------------------------------------------------------------- **/

lli catalan[30];
int catalan_solve(){
    catalan[0]=1;
    fore(i, 0, 25){
        catalan[i+1] = (catalan[i] * (4*i + 2))/(i + 2);
    }
}
