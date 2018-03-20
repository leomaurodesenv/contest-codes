/** -------------------------------------------------------------------------- **/
/** Fibonnaci **/
// Zeckendorf:
// Todo inteiro positivo pode ser escrito de maneira 'unica' como uma soma de 
// elementos da sequencia de fibonnaci.
// -> sempre pegar o maior possivel
// Pisano Period:
// Os uultimos um/dois/tres/quatro digitos de um numero de Fibonacci se
// repetem em periodos de 60/300/1500/15000, respectivamente.
/** -------------------------------------------------------------------------- **/

// Recursivo
int fibonnaci_rec(int n){
	if(n < 2) return n;
	return fibonnaci_rec(n-1) + fibonnaci_rec(n-2);
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