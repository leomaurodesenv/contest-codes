/** -------------------------------------------------------------------------- **/
/** Retorna os valores de x, y e mdc **/
// euclid_estendido
// -> calcula a.x + b.y = gcd(a, b); [= maximo divisor commum]
// diofantinas
// -> calcula a.s.k + b.t.k = c; [k = c / gcd(a, b)]
/** -------------------------------------------------------------------------- **/

void euclid_estendido(lli a, lli b, lli &alpha, lli &beta, lli &mdc){
    lli x[] = {1, 0};
    lli y[] = {0, 1};

    while(a%b != 0){
        lli quo = a/b;
        lli temp = a;
        a = b;
        b = temp%b;

        lli xa = x[0] - (x[1]*quo);
        lli ya = y[0] - (y[1]*quo);

        x[0] = x[1];
        x[1] = xa;
        y[0] = y[1];
        y[1] = ya;
    }

    mdc = b;
    alpha = x[1];
    beta = y[1];
}

void diofantinas(lli a, lli b, lli c, lli &alpha, lli &beta){
	lli d = gcd(a, b), mdc, k;
	if(c % d != 0) return; //Não deu certo--
	k = c/d;

	euclid_estendido(a, b, alpha, beta, mdc);

    alpha *= k;
    beta *= k;
}

