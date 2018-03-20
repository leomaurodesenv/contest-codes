/** -------------------------------------------------------------------------- **/
/** Coeficientes Binomiais **/
// -> C(n,k) = C(n-1,k-1) + C(n-1,k)
// -> C(n, 0) = C(n, n) = 1;
// Para muitos casos: triangulo de pascal
// n = 0 => 1
// n = 1 => 1 1
// n = 2 => 1 2 1
// n = 3 => 1 3 3 1
// n = 4 => 1 4 6 4 1
/** -------------------------------------------------------------------------- **/

// Recursivo
int c_binomial(int n, int k){
	if(k == 0 || n == k) return 1;
	return c_binomial(n-1, k-1) + c_binomial(c-1, k);
}

// Iterativo
int fibonnaci_itt(int n){
	int fa = 0, fc = 1, aux;
	
	fore(i, 0, n){
		aux = fc;
		fc += fa;
		fa = aux;
	}
	
	return fc;
}