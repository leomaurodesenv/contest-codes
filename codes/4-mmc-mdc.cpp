/** -------------------------------------------------------------------------- **/
/** Retorna o MMC ou MDC **/
// Maximo Divisor Comum (GCD)
// Minimo Multiplo Comum (LCM)
/** -------------------------------------------------------------------------- **/

lli gcd(lli a, lli b){
    return (b == 0) ? a : gcd(b, a%b);
}

lli lcm(lli a, lli b){
    lli temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}