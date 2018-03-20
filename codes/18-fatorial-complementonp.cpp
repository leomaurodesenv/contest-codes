/** -------------------------------------------------------------------------- **/
/** Fatorial e Complemento **/
/** -------------------------------------------------------------------------- **/

lli fat(lli num){
    lli r = 1;
    fore(i, 2, num+1){
        r *= i;
    }
    return r;
}

lli comp(lli n, lli p){
    if(n < p || p == n || p == 0) return 1;
    else if(p == 1) return n;

    lli top = 1, bottom;
    fore(i, p+1, n+1) top *= i;
    bottom = fat(n-p);

    return (top/bottom);
}